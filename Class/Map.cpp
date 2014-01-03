#include "Map.h"

Map::Map(const char* s, vector<RectangleShape> V):V_(V){
    TX.loadFromFile(s);
    S_.setTexture(TX);
}

void Map::draw(RenderWindow& W){
    W.draw(S_);
    if(!V_.empty()){
        for(size_t i=0;i<V_.size();i++){
            W.draw(V_[i]);
        }
    }
}
