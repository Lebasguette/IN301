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
	if (l == NULL) return l;
	liste tmp, deb=l;
	int i;
	// cas ou a >1 on cherche le precedent, on supprime le present et on donne au precedent laddresse du suivant du present 
	if (a>1){
	for (i=0; i<a-1; i++){
		tmp= l;
		l=l->suiv;
	} 
	tmp->suiv= l->suiv;
	free(l);
	return deb;
	}
	// autres cas 
	else if (a<2){
		if (a==0){
			tmp = l->suiv;
			free(l);
			return tmp;
		}
		if (a==1){
			tmp=l->suiv->suiv;
			free(l->suiv);
			l->suiv= tmp;
			return l;
		}						
	}
}
liste concat(liste l, liste m){
	if (l ==NULL) return m;
	l->suiv = concat(l->suiv, m);
	return l;
}
liste ajout_0_liste( liste l, int t){
	int i;
	for (i=0; i < t; i++){
		l= ajout_debut_liste(l, 0);
	}
	return l;
}
liste entrelace (liste l, liste m){
	liste e= init_liste_vide();
	liste tmp;
	while (l != NULL && m != NULL){
		if (l->val <=  m-> val){
			e= ajout_fin_liste(e, l->val);
			tmp= l->suiv;
			free(l);
			l = tmp;
			display_list(l);
		}
		else if ( m-> val <= l->val){
			e=ajout_fin_liste(e, m->val);
			tmp= m->suiv;
			free(m);
			m = tmp;
			display_list(m);
		}
	}
	if ( l != NULL){
		m=l;
	}
	while ( m != NULL){
		e= ajout_fin_liste(e, m->val);
		m= m-> suiv;
	}
return e;
}
int max_elem(liste l){
	int a = l-> val;
	while (l != NULL)
liste tri_a_bulle(liste l){
	int i= taille_list(l);
	
}
int main()
{
	int a;
	liste m= init_liste_vide();
	//liste e= init_liste_vide();
	liste l = init_liste_vide();
	l = alea_liste(15);
	m = alea_liste(15);
	display_list(l);
	a= taille_list( l);
	printf("%d : taille de la liste \n", a);
	a= search_elem_list(l, 6);
	affiche_pos(a);
	/*while (l != NULL){
		printf("quel element supprimer ?\n");
		scanf("%d", &a);
		l=delete_elem(l, a);
		display_list(l);
		printf("en supprimer un autre ? (0 non, 1 oui)");
		scanf("%d", &a);
		if (a==0) break;		
	}*/
	display_list(m);
	//l= concat(l,m);
	display_list(l);
	/*
	e= entrelace(l, m);
	display_list(e);
	*/
	return 0;
}
