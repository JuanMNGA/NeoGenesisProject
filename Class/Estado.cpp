#include "Estado.h"

Estado::Estado(){
    for(int i=0;i<4;i++)
        estados[i]=false;
}

void Estado::set_suelo(bool v){
    estados[0]=v;
}

void Estado::set_hambre(bool v){
    estados[1]=v;
}

void Estado::set_sueno(bool v){
    estados[2]=v;
}

void Estado::set_saltando(bool v){
    estados[3]=v;
}
