#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct element{

	int val;
	struct element* suiv;
};

typedef struct element element;
typedef element* liste;

liste init_liste_vide(){

	return NULL;
}
liste ajout_debut_liste( liste l, int a){
	
	liste tmp = malloc(sizeof(element));
	tmp->val = a;
	tmp->suiv = l;
	return tmp;
	
}
liste ajout_tri( liste l, int a){
	liste tmp=l;
	liste new = malloc(sizeof(element));
	new-> val= a;
	if (l == NULL || a < l->suiv->val){ return ajout_debut_liste(l,a);}
	while ((tmp->suiv != NULL) && (a> tmp->suiv->val)){
		tmp = tmp->suiv;
	}
	new-> suiv = tmp-> suiv;
	tmp-> suiv = new;
	return l;
}
int verif_list_empty( liste l){

	return(l == NULL);
}
int taille_list ( liste l){
	if ( l == NULL) return 0;
	return 1+ taille_list(l->suiv);
}
void display_list( liste l){

	while (!verif_list_empty(l)){
		
		printf("%d ", l->val);
		l = l->suiv;
	}
	printf("\n");
}
liste alea_liste (int n){
	liste l= init_liste_vide();
	int x;
	srand(time(NULL));
	while (1){
		x = rand()%n;
	if (x == 0) return l;
	else l= ajout_debut_liste(l, x);
	}
}
		
		

liste ajout_fin_liste (liste l, int a){
	liste tmp=l;
	if (verif_list_empty(l)){
		return ajout_debut_liste(l,a);
	}
	while(tmp->suiv != NULL){ 
		tmp=tmp->suiv;
	}
	liste new = malloc(sizeof(element));
	new->val = a;
	new->suiv = NULL;
	tmp->suiv=new;
	return l;
}
void free_memory_list( liste l){
	if (!verif_list_empty(l)){
		free_memory_list(l->suiv);
		free(l);
	}
}
int search_elem_list (liste l,int a){
	int i=1;
	while (1){
		if( l == NULL) return 0;
		else if (l->val == a){ return i;}
		i++;
		l=l->suiv;
	}
	return i;
}
void affiche_pos(int a){
	if (a==0 ) { printf("désolé il semblerait que le nombre cherché ne se trouve pas dans votre le liste ... \n DOMMAGE !");}
	else { printf("le nombre se trouve position n°%d \n", a);}
}
liste delete_elem( liste l, int a){
	if(l == NULL) return l;
	liste tmp_max, tmp_min;
	int i;
	if ( a > 1){
	
	for (i =0; i<a-1; i++){
		if ( i == a-2){
			tmp_min = l;
		}
		l= l->suiv;
	}
	tmp_max= l->suiv;
	free(l);
	tmp_min->suiv= tmp_max;
	return tmp_min;
}
	else {
		tmp_min = l->suiv;
		free(l);
		return tmp_min;
	}
}
int main()
{
	int a;
	liste l = init_liste_vide();
	l = alea_liste(10);
	display_list(l);
	a= taille_list( l);
	printf("%d : taille de la liste \n", a);
	a= search_elem_list(l, 6);
	affiche_pos(a);
	while (l != NULL){
		printf("quel element supprimer ?\n");
		scanf("%d", &a);
		delete_elem(l, a);
		display_list(l);
		printf("en supprimer un autre ? (0 non, 1 oui)");
		scanf("%d", &a);
		if (a==0) break;		
	}
	return 0;
}
