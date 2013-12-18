#include "Player.h"
#include <cmath>

Player::Player(const char* a, float x, float y, int r):raza(r){
	txPJ.loadFromFile(a);
	spPJ.setTexture(txPJ);
	Origin.x = x;
	Origin.y = y;
	spPJ.setPosition(Origin);
	Destiny = Origin;
	Distance = 0;
}

void Player::movRaton(RenderWindow& W,Sprite& S){
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
}

void Player::update(View& v){
	if(Distance>0){
		if(Distance-(1*((float)atributos.niv_atributo(18)+atributos.mx_atributo(18)))>0)Origin=Origin+(Direction*((float)atributos.niv_atributo(18)+atributos.mx_atributo(18)));
		else Origin=Destiny;
		spPJ.setPosition(Origin);
		v.setCenter(Origin.x+25,Origin.y+80);
		Distance=Distance-(1*((float)atributos.niv_atributo(18)+atributos.mx_atributo(18)));
	}
}

void Player::draw(RenderWindow& W){
	W.draw(spPJ);
}

Vector2f Player::position(){
	return (spPJ.getPosition());
}
