#include "Menu.h"

Menu::Menu(const char* ruta){
	TxMenu.loadFromFile(ruta);
	SpMenu.setTexture(TxMenu);
	SpMenu.setPosition(680,0);
	for(int i=0;i<10;i++){
		int j=60;
		RectMenu[i].left=680;
		RectMenu[i].top=i*j;
		RectMenu[i].width=120;
		RectMenu[i].height=60;
		j+=60;
	}
}

bool Menu::contains(Vector2f i){
	if(i.y >= 680){
		return true;
	}else{
		return false;
	}
}

void Menu::draw(RenderWindow& W){
		W.draw(SpMenu);
}
