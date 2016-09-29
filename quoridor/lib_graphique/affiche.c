#include "fonctions_jeu.h"
#define LARJEU 630
#define HAUJEU 630
#define LRGWALL 10
#define WALL LRGWALL/2
// couleurs 
// J'ai préferer mettres les couleurs du style flat ui qui sont je trouve plus adaptées aux interfaces graphistes minimalistes

#define flat_blue 0x2c3e50
#define flat_blue2 0x34495e
#define flat_white 0xecf0f1
#define flat_red 0xe74c3c
#define flat_orange 0xd35400
#define flat_grey 0x7f8c8d

void affiche_plateau(Partie part){
	// fond du plateau
	POINT zjb, zjh; // point zone (z) de jeu (j) bas (b) ou haut (h)
	zjb.x = 0; zjb.y =0;
	zjh.x = LARJEU; zjh.y = HAUJEU;
	
	draw_fill_rectangle( zjb, zjh, flat_blue2);
	
	// cases avec les murs et bords
	
	POINT bg, hd, m1, m2;
	int i, j;
	for (i = 0; i< NBCASE; i++){
		for (j=0; j< NBCASE; j++){
			bg.x = j * (LARJEU/NBCASE); bg.y= i * (HAUJEU/NBCASE);
			hd.x = bg.x + (LARJEU/NBCASE);hd.y = bg.y + (LARJEU/NBCASE);
			//carreaux :
			draw_rectangle( bg, hd, flat_grey);
			if (part.plat.j[i][j].b == BAS){
				m1.x = bg.x + WALL; m1.y = bg.y - WALL;
				m2.x = hd.x - WALL; m2.y = bg.y + WALL;
				draw_fill_rectangle( m1, m2, flat_white);
			}
			if ( part.plat.j[i][j].h != VIDE){
				m1.x = bg.x + WALL; m1.y = hd.y + WALL;
				m2.x = hd.x- WALL; m2.y = hd.y - WALL;
				draw_fill_rectangle( m1, m2, flat_white);
			}
			if ( part.plat.j[i][j].g != VIDE){
				m1.x = bg.x - WALL; m1.y = bg.y + WALL;
				m2.x = bg.x + WALL; m2.y = hd.y - WALL;
				draw_fill_rectangle( m1, m2, flat_white);
			}
			if ( part.plat.j[i][j].d != VIDE){
				m1.x = hd.x + WALL; m1.y = bg.y + WALL;
				m2.x = hd.x - WALL; m2.y = hd.y - WALL;
				draw_fill_rectangle( m1, m2, flat_white);
			}
		}
	}
	// on s'occupe des pions 
	POINT jou;
	if (part.tour % 2 == 0){
		jou.x = part.j1.pos_x *  (LARJEU/NBCASE) + (LARJEU/NBCASE) * 1^(-2);
		jou.y = part.j1.pos_y *  (LARJEU/NBCASE) + (LARJEU/NBCASE) * 1^(-2);
		draw_fill_circle(jou, (LARJEU/NBCASE) * 1^(-2), flat_red);
	}
	else {
		jou.x = part.j2.pos_x *  (LARJEU/NBCASE) + (LARJEU/NBCASE) * 1^(-2);
		jou.y = part.j2.pos_y *  (LARJEU/NBCASE) + (LARJEU/NBCASE) * 1^(-2);
		draw_fill_circle(jou, (LARJEU/NBCASE) * 1^(-2), flat_orange);
}
}
				
	
	
