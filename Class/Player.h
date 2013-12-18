#ifndef PLAYER_H
#define PLAYER_H
#include "../sfml.h"
#include "Atributes.h"
#include "Races.h"

using namespace sf;

class Player{
	public:
		explicit Player(const char* a, float x, float y,int r);
		void movRaton(RenderWindow& W,Sprite& S);
		void update(View& v);
		void draw(RenderWindow& W);
		Vector2f position();
	private:
		Atributes atributos;
		Races raza;
		Sprite spPJ;
		Texture txPJ;
		Vector2f Origin;
		Vector2f Destiny;
		Vector2f Direction;
		float Distance;
};
#endif
