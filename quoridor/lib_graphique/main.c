#include <stdio.h>
#include "affiche.h"
int main(int argc, char **argv)
{
	Partie part;
	init_graphics( LARJEU, HAUJEU);
	affiche_auto_off();
	part.plat= init_plateau(part.plat);
	part.j1 = initpion1();
	part.j2= initpion2();
	part.tour = 0;
	affiche_plateau (part);
	affiche_all();
	wait_escape();
	
	return 0;
}

