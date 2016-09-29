#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAILLE 10
#define BORNE 20
struct TAB{
	int taille;
	int tab[100];
};
typedef struct TAB TABLEAU;
int alea_int(int n){
	return rand()%n;	
}

TABLEAU init_tab( TABLEAU a){
	a.taille = TAILLE;
	int i;
	for (i=0; i < a.taille; i++){
		a.tab[i]= alea_int(BORNE);
	}
	return a;
}
int multi( TABLEAU a){
	int i, j=1;
	for (i=0; i<a.taille; i++){
		j = a.tab[i]*j;
	}
	return j;
}
int min(TABLEAU a){
	int i,min= a.tab[0];
	for (i =1; i <a.taille; i++){
		if (a.tab[i] < min){
			min = a.tab[i];
		}
	}
	return min;
}
TABLEAU decalage( TABLEAU a){
	int i;
	a.taille++;
	for(i = a.taille; i >= 1; i--){
		a.tab[i]=a.tab[i-1];
	}
	a.tab[0] = 0;
	return a;
}
void affiche_tab(TABLEAU a){
	int i; 
	for (i= 0; i<a.taille; i++){
		printf("case %d : %d \n",i, a.tab[i]);
	}
}
// MAIN
int main()
{	
	int a,b;
	TABLEAU jean;
	/*printf("%lu \n", sizeof(TABLEAU));*/
	srand(time(NULL));
	jean= init_tab(jean);
	affiche_tab(jean);
	a = multi( jean);
	b = min(jean);
	printf("produit : %d, min : %d \n ", a,b);
	jean = decalage(jean);
	affiche_tab(jean);
	printf("\n");
	jean = trirapide(jean, 0, jean.taille);
	affiche_tab(jean);
	return 0;
}
