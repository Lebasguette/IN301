#include "structures.h"
Plateau init_plateau(Plateau p){
	int i;
	int j;
	for (i=0; i < NBCASE; i++){
		for( j=0; j < NBCASE; j++){
			if ( i==0){
				p.j[i][j].b = BAS;
				p.j[i][j].h = VIDE; //on met les bords du jeu.
			}
			else if (i < 8 ){
				p.j[i][j].b = VIDE;
				p.j[i][j].h = VIDE;
			}
			else {
				p.j[i][j].b = VIDE;
				p.j[i][j].h = HAUT;
			}
			
			// maintenant ceux des côtés :
			if ( j == 0){
				p.j[i][j].g = GAUCHE;
				p.j[i][j].d = VIDE;
			}
			else if ( j < 8){
				p.j[i][j].g = VIDE;
				p.j[i][j].d = VIDE;
			}
			else {
				p.j[i][j].g = VIDE;
				p.j[i][j].d = DROITE;
			}
		}
	}
	return p;
}
PION initpion1(){
	PION p;
	p.pos_x = NBCASE/2;
	p.pos_y = 0;
	return p;
}
PION initpion2(){
	PION p;
	p.pos_x = NBCASE/2;
	p.pos_y = NBCASE-1;
	return p;
}
