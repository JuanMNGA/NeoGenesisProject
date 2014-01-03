#include "include.h"
#include <iostream>

using namespace sf;

int main(){
	//Creacion de ventana
	RenderWindow Window(VideoMode(800,600,32),"RPG Project1");
	Window.setFramerateLimit(60);
	//Creamos al personaje
	Player player("Images/Flecha.png",500,400,0);
	//Insertamos el fondo
	vector<RectangleShape> V(0);
	Map mapa("Images/World.png",V);
	//Creamos el menu del juego
	Menu menu_("Images/MenuButton.png");
	View view1(player.position()+Vector2f(25,80),Vector2f(800,600));
	view1.setViewport(FloatRect(0,0,0.85f,0.85f));
	while(Window.isOpen()){
        Event evento;
        //Aun no se por que, pero cambiando el while del pollEvent por un if, no aumenta el framerate cuando muevo el raton
		if(Window.pollEvent(evento)){
			if(evento.type == Event::Closed){
				Window.close();
			}
			/*if(evento.type == Event::MouseButtonPressed){
				if(evento.mouseButton.button == sf::Mouse::Left){
					if(Window.getViewport(view1).contains(Mouse::getPosition(Window)))
						player.movRaton(Window,mapa.fondo());
				}
			}*/
			//Movimiento del personaje
			if(Keyboard::isKeyPressed(Keyboard::D)){
                player.movDer(mapa.fondo());
			}
			if(Keyboard::isKeyPressed(Keyboard::A)){
                player.movIzq(mapa.fondo());
			}
			if(Keyboard::isKeyPressed(Keyboard::W) && player.en_suelo()){
                if(Keyboard::isKeyPressed(Keyboard::D)){
                    player.movDer(mapa.fondo());
                    player.saltar(mapa.fondo());
                }else{
                    if(Keyboard::isKeyPressed(Keyboard::A)){
                        player.movIzq(mapa.fondo());
                        player.saltar(mapa.fondo());
                    }else{
                        player.saltar(mapa.fondo());
                    }
                }
			}
			//Fin movimiento del personaje
		}
		Window.clear();
		player.update(mapa.fondo(),view1);
        Window.setView(view1);
        mapa.draw(Window);
        player.draw(Window);
        Window.setView(Window.getDefaultView());
        menu_.draw(Window);
        Window.setView(view1);
		Window.display();
	}
	return EXIT_SUCCESS;
}
