#include "Player.h"
#include <cmath>

Player::Player(const char* a, float x, float y, int r):raza(r){
	txPJ.loadFromFile(a);
	spPJ.setTexture(txPJ);
	spPJ.setPosition(x,y);
	/*Origin.x = x;
	Origin.y = y;
	Destiny = Origin;
	Distance = 0;*/
	saltoMax = 70*(atributos.niv_atributo(19)+atributos.mx_atributo(19));
}

void Player::movDer(Sprite& S){
    if(S.getGlobalBounds().contains(spPJ.getPosition()+Vector2f(50+2+atributos.niv_atributo(18)+atributos.mx_atributo(18),0)))
        spPJ.move(2+atributos.niv_atributo(18)+atributos.mx_atributo(18),0);
}
void Player::movIzq(Sprite& S){
if(S.getGlobalBounds().contains(spPJ.getPosition()+Vector2f(-2-(atributos.niv_atributo(18)+atributos.mx_atributo(18)),0)))
    spPJ.move(-2-(atributos.niv_atributo(18)+atributos.mx_atributo(18)),0);
}

void Player::saltar(Sprite& S){
if(S.getGlobalBounds().contains(spPJ.getPosition()+Vector2f(0,-2-atributos.niv_atributo(19)+atributos.mx_atributo(19))))
    contador_salto=0;
    status.set_suelo(false);
    status.set_saltando(true);
}

/*void Player::movRaton(RenderWindow& W,Sprite& S){
	//float NewX = Mouse::getPosition(W).x-25;
	//float NewY = Mouse::getPosition(W).y-80;
	Vector2i pixelpos = Mouse::getPosition(W);
	Vector2f worldpos = W.mapPixelToCoords(pixelpos);
	if(S.getLocalBounds().contains(worldpos)){
		worldpos.x-=25;
		worldpos.y-=80;
		Origin = spPJ.getPosition();
		Destiny = worldpos;
		Direction = Destiny - Origin;
		Distance = sqrt((Destiny.x - Origin.x)*(Destiny.x - Origin.x)+(Destiny.y - Origin.y)*(Destiny.y - Origin.y));
		Direction /= Distance;
	}
}*/

void Player::update(Sprite& S,View& v){
	/*if(Distance>0){
		if(Distance-(1*((float)atributos.niv_atributo(18)+atributos.mx_atributo(18)))>0)Origin=Origin+(Direction*((float)atributos.niv_atributo(18)+atributos.mx_atributo(18)));
		else Origin=Destiny;
		spPJ.setPosition(Origin);
		v.setCenter(Origin.x+25,Origin.y+80);
		Distance=Distance-(1*((float)atributos.niv_atributo(18)+atributos.mx_atributo(18)));
	}
	*/
	v.setCenter(spPJ.getPosition().x+25,spPJ.getPosition().y+80);
	if(status.get_saltando() && contador_salto <= saltoMax){
        spPJ.move(0,-2*(atributos.niv_atributo(19)+atributos.mx_atributo(19)));
        contador_salto+=2*(atributos.niv_atributo(19)+atributos.mx_atributo(19));
	}
	if(contador_salto==saltoMax){
        status.set_saltando(false);
	}
	if(spPJ.getPosition().y >= S.getGlobalBounds().height -300 && !status.get_saltando()){
        status.set_suelo(true);
	}
	if(!status.get_suelo() && !status.get_saltando()){
        spPJ.move(0,6.8f);
	}
}

void Player::draw(RenderWindow& W){
	W.draw(spPJ);
}

Vector2f Player::position(){
	return (spPJ.getPosition());
}
bool Player::en_suelo()const{
    return (status.get_suelo());
}
