#ifndef ATRIBUTES_H
#define ARTIBUTES_H
/*
Lista de atributos:
//Fisicos
0: Fuerza
1: Forma Fisica
2: Destreza
//Mentales
3: Inteligencia
4: Autocontrol
5: Sabiduria
//Destrezas
6: Espadas
7: Mazas
8: Hachas
9: Arcos
10: Escudos
11: Pistola
12: Rifle
13: Pesada
14: Sin armas
15: Combate
//Mundo
16: Cabalgar
17: Conduccion
18: Correr
19: Saltar
20: Habilidad
21: Esquivar
22: Orientacion
23: Ocultacion
24: Percepcion
25: Anticipacion
*/
class Atributes{
	public:
			//Constructor
		Atributes();
			//Observador de nivel de atributo
		int niv_atributo(int n) const;
			//Observador de MX de atributo
		int mx_atributo(int n) const;
			//Modificador, añade i al atributo n
		void mod_atributo(int n, int i=1);
			//Modificador, añade i al mx del atributo n
		void mod_mx(int n, int i=1);
			//Ver el MX efectivo del atributo n
		int mx_efectivo(int n);
			//Cambia niveles y modifica mx de los atributos
		void subida_mx_atributos();
			//Observador max vida
		int max_vida();
			//Observador vida actual
		int act_vida();
			//Modificador max vida + n
		void max_vida(int n);
			//Modificador vida actual + - n
		void act_vida(int n);
			//Modificador cansancio max, cansancio perpetuo
		void max_cansancio(int i);
			//Observador cansancio actual
		int act_cansancio()const;
			//Modificador cansancio actual
		void mod_cansancio(int i=1);
			//Observador experiencia max
		int max_exp();
			//Observador experiencia actual
		int act_exp();
			//Modificador experiencia max
		void max_exp(int n);
			//Modificador experiencia actual
		void act_exp(int n);
			//Comprobar subida de nivel
		bool lvl_up();


	private:
		int atributos_mx[26][2];
		int vida[2];
		int cansancio[20][2];
		int exp[2];

};
#endif
