#include "Races.h"
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

Races::Races(int n):raza_(n){
    FILE *fich;
    switch(raza_){
        case 0:
            fich = fopen("Class/Fichas_E/fich_e_hum","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 1:
            fich = fopen("Class/Fichas_E/fich_e_elf","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 2:
            fich = fopen("Class/Fichas_E/fich_e_ena","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 3:
            fich = fopen("Class/Fichas_E/fich_e_med","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 4:
            fich = fopen("Class/Fichas_E/fich_e_nom","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 5:
            fich = fopen("Class/Fichas_E/fich_e_sem","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 6:
            fich = fopen("Class/Fichas_E/fich_e_orc","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 7:
            fich = fopen("Class/Fichas_E/fich_e_cyb","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 8:
            fich = fopen("Class/Fichas_E/fich_e_mor","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 9:
            fich = fopen("Class/Fichas_E/fich_e_vam","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
        case 10:
            fich = fopen("Class/Fichas_E/fich_e_lic","r");
			if(fich==NULL) perror ("Fallo al abrir fichero.");
			else{
				for(int i=0;i<26;i++){
					for(int j=0;j<6;j++){
						fscanf(fich,"%d",&evolucion[i][j]);
					}
				}
			}
			fclose(fich);
        break;
    }
}
