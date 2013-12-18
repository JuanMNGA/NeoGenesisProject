#include <iostream>
#include <stdio.h>
/* Lista de razas
* 0: Humano
* 1: Elfo
* 2: Enano
* 3: Mediano
* 4: Nomada
* 5: Semi_Bestia
* 6: Orco
* 7: Cyborg
* 8: Morgloz
* 9: Vampiro
*10: Licantropo
*/

using namespace std;

class Races{
    public:
        Races(int n);
        int raza(){return raza_;}
        int valor_ficha(int i, int tirada)const{return evolucion[i][tirada];}
        int& valor_ficha(int i, int j){return evolucion[i][j];}
    private:
        int evolucion[26][6];
        int raza_;
};
