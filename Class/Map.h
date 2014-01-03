#ifndef MAP_H
#define MAP_H
#include <vector>
#include "../sfml.h"

using namespace std;
using namespace sf;

class Map{
    public:
        Map(const char* s, vector<RectangleShape> V_);
        void draw(RenderWindow& W);
        Sprite& fondo(){return S_;}
    private:
        Texture TX;
        Sprite S_;
        vector<RectangleShape> V_;
};
#endif
