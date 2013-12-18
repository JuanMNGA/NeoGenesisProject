#include "include.h"
#include <iostream>

using namespace sf;

int main(){
	//Creacion de ventana
	RenderWindow Window(VideoMode(800,600,32),"RPG Project1");
	//Creamos al personaje
	Player player("Images/Flecha.png",500,1000,0);
	//Insertamos el fondo
	Texture TX;
	TX.loadFromFile("Images/World.png");
	Sprite BG(TX);
	//Creamos el menu del juego
	Menu menu_("Images/MenuButton.png");
	View view1(player.position()+Vector2f(25,80),Vector2f(800,600));
	view1.setViewport(FloatRect(0,0,0.85f,0.85f));
	Event evento;
	while(Window.isOpen()){
		while(Window.pollEvent(evento)){
			if(evento.type == Event::Closed){
				Window.close();
			}
			if(evento.type == Event::MouseButtonPressed){
				if(evento.mouseButton.button == sf::Mouse::Left){
					if(Window.getViewport(view1).contains(Mouse::getPosition(Window)))
						player.movRaton(Window,BG);
				}
			}
		}
		Window.clear();
		player.update(view1);
		Window.setView(view1);
		Window.draw(BG);
		player.draw(Window);
		Window.setView(Window.getDefaultView());
		menu_.draw(Window);
		Window.setView(view1);
		Window.display();
	}
	return EXIT_SUCCESS;
}
