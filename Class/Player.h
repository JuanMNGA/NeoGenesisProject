#ifndef PLAYER_H
#define PLAYER_H
#include "../sfml.h"
#include "Atributes.h"
#include "Races.h"
#include "Estado.h"

using namespace sf;

class Player{
	public:
		explicit Player(const char* a, float x, float y,int r);
		void saltar(Sprite& S);
		void movDer(Sprite& S);
		void movIzq(Sprite& S);
		//void movRaton(RenderWindow& W,Sprite& S);
		void update(Sprite& S,View& v);
		void draw(RenderWindow& W);
		Vector2f position();
		bool en_suelo()const;
	private:
		Atributes atributos;
		Races raza;
		Sprite spPJ;
		Texture txPJ;
		Estado status;
		int saltoMax;
		int contador_salto;
		/*Vector2f Origin;
		Vector2f Destiny;
		Vector2f Direction;
		float Distance;*/
};
#endif
