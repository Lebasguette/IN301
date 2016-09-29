#include <stdio.h>
#include <stdlib.h>

int alea_intperso(int n){
	srand(time(NULL));
	int x = rand()%n;
	return x;
}
int nb_mots(){
	FILE* fichier = fopen("bdd.txt", "r+");
	int i = 0;
	char str[256];
	while ( fgets( str, 256, fichier) != NULL){
		i++;
	}
	fclose(fichier);
	return i;
}
	
