#include "graphics.h"
#include "fonctions.h"
int main(int argc, char **argv)
{
	int nb;
	FILE* fic = fopen("bdd.txt", "r");
	char mot[256];
	
	nb = nb_mots();
	int x = 1 + alea_int(nb);
	int i;
	
	printf("%d mots dans la bdd \n ", nb);
	
	for (i =0 ; i < x; i++){
		fgets( mot, 256, fic);
	}
	printf("%s \n", mot);
	fclose(fic);
	return 0;
}

