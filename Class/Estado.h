#ifndef ESTADO_H
#define ESTADO_H
/*
0: En el suelo
1: Hambre
2: Sueño
3: Saltando
*/

class Estado{
    public:
        Estado();
        void set_suelo(bool v);
        bool get_suelo() const{return estados[0];}
        void set_hambre(bool v);
        bool get_hambre() const{return estados[1];}
        void set_sueno(bool v);
        bool get_sueno() const{return estados[2];}
        void set_saltando(bool v);
        bool get_saltando() const{return estados[3];}
    private:
        bool estados[4];
};

#endif
