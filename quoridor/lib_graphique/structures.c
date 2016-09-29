#include "graphics.h"
#define HAUT 0 // si il y a un bord en haut
#define BAS 1  // "  "  "  " " "  " en bas
#define GAUCHE 2 // a gauche
#define DROITE 3 // a droite
#define NBORD -1 // pas de bord
#define NBCASE 9 // nombre de case dans le tableau
#define VIDE -1  // si la case ou un element est vide, 
#define J1 1	// si le J1 doit jouer ou doit gagner
#define J2 2	// même chose mais pour le j2



struct direction{
	int h;
	int b;
	int g;
	int d;
};
typedef struct direction Direction;
struct plateau{
	Direction j[NBCASE][NBCASE];
};
typedef struct plateau Plateau;
struct pion{
	int pos_x;
	int pos_y;
}; typedef struct pion PION;
struct partie {
	Plateau plat; // plateau 
	PION j1;
	PION j2;
	int tour;
	int state; // Savoir si le jeu est gagné ou en cours 
}; typedef struct partie Partie;				
			
