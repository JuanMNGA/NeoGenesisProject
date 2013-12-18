#include "Atributes.h"

//Constructor
Atributes::Atributes(){
	for(int i=0;i<26;i++){
		atributos_mx[i][0]=0;
		atributos_mx[i][1]=1;
	}
	vida[0]=10;
	vida[1]=10;
	for(int i=0;i<20;i++){
		cansancio[i][0]=0;
		cansancio[i][1]=0;
		if(i==4){cansancio[i][1]=-3;}
		if(i==9){cansancio[i][1]=-9;}
		if(i==14){cansancio[i][1]=-15;}
		if(i==19){cansancio[i][1]=-24;}
	}
	exp[0]=0;
	exp[1]=6;
}
	//Observador de nivel de atributo
int Atributes::niv_atributo(int n) const{return atributos_mx[n][0];}
	//Observador de MX de atributo
int Atributes::mx_atributo(int n) const{return atributos_mx[n][1];}
	//Modificador, añade i al atributo n
void Atributes::mod_atributo(int n, int i){atributos_mx[n][0]+=i;}
	//Modificador, añade i al mx del atributo n
void Atributes::mod_mx(int n, int i){atributos_mx[n][1]+=i;}
	//Ver el MX efectivo del atributo n
int Atributes::mx_efectivo(int n){
	if(atributos_mx[n][1]==1||atributos_mx[n][1]==2||atributos_mx[n][1]==3){
		return 1;
	}else{
		return 2;
	}
}
	//Cambia niveles y modifica mx de los atributos
void Atributes::subida_mx_atributos(){
	for(int i=0;i<26;i++){
		if(atributos_mx[i][1]>5){
			atributos_mx[i][0]+=1;
			atributos_mx[i][1]=atributos_mx[i][1]-5;
		}
	}
}
	//Observador max vida
int Atributes::max_vida(){return vida[1];}
	//Observador vida actual
int Atributes::act_vida(){return vida[0];}
	//Modificador max vida + n
void Atributes::max_vida(int n){vida[1]+=n;}
	//Modificador vida actual + - n
void Atributes::act_vida(int n){vida[0]+=n;}
	//Observador cansancio max
void Atributes::max_cansancio(int i){
	for(int can=0;can<i;can++){
		cansancio[can][0]=2;
	}
}
	//Observador cansancio actual
int Atributes::act_cansancio()const{
	int i;
	for(i=0;cansancio[i]!=0;i++);
	return i;
}
	//Modificador cansancio actual
void Atributes::mod_cansancio(int i){
	int n=act_cansancio();
	for(int j=0;j<i;j++){
		cansancio[n+j+1][0]=1;
	}
}
	//Observador experiencia max
int Atributes::max_exp(){return exp[1];}
	//Observador experiencia actual
int Atributes::act_exp(){return exp[0];}
	//Modificador experiencia max
void Atributes::max_exp(int n){exp[1]+=n;}
	//Modificador experiencia actual
void Atributes::act_exp(int n){exp[0]+=n;}
	//Comprobar subida de nivel
bool Atributes::lvl_up(){return (exp[0]>=exp[1]?true:false);}
