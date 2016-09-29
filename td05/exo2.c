#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
struct element {
	char val;
	struct element *suiv;
};
typedef struct element* ListeC;
void affichechaine( ListeC l){
	while ( l != NULL){
		printf("%c \n", l->val);
		l= l->suiv;
	}
} 

ListeC ajout_fin( ListeC l, char *t){
	while ( l->suiv != NULL){
		l=l->suiv;
	}
	ListeC new= malloc(sizeof(listec));
	new->val= t[0];
	new->suiv = NULL;
	l->suiv = new;
	return l; 
	
}
ListeC ajoutChaine ( char *t, ListeC l){
	if ( t = '\0'){
		return l;
	}
	l= ajout_fin(l,t[0]);
	l= ajoutChaine(t+1, l);
}

int main(int argc, char** argv)
{
	ListeC l;
	l=ajoutChaine( *argv, l);
	affichechaine( l);
	return 0;
}
