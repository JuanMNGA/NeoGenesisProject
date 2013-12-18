#ifndef MENU_H
#define MENU_H
#include "Player.h"

using namespace sf;

class Menu{
	public:
		Menu(const char* ruta);
		bool contains(Vector2f i);
		void draw(RenderWindow& W);
		void CharacterMenu(Player player);
		//Faltan metodos para las clases: Mochila, Habilidades, etc

	private:
		Texture TxMenu;
		Sprite SpMenu;
		Rect<double> RectMenu[10];
};
#endif
