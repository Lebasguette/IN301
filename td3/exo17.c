#include <stdio.h>
#include <math.h>

void permutation(int *a, int *b){
	int tmp;
	tmp = *a;
	*a=*b;
	*b=tmp;	
}


//DEUXIEME FCT 

void reinitPointeur(int* *p){
	*p = NULL;
}

// MAIN
int main()
{	
	/*
	//PARTIE 1
	
	
	printf("Taille int %lu \n", sizeof(char));
	// taille int
	printf("Taille int %lu \n", sizeof(int));
	// taille double
	printf("Taille int %lu \n", sizeof(double));
	// taille char*
	printf("Taille int %lu \n", sizeof(char*));
	// taille void*
	printf("Taille int %lu \n", sizeof(void*));
	// taille int*
	printf("Taille int %lu \n", sizeof(int*));
	// taille double*
	printf("Taille int %lu \n", sizeof(double*));
	// taille int**
	printf("Taille int %lu \n", sizeof(int**));
	// taille int[10]
	printf("Taille int %lu \n", sizeof(int[10]));
	// taille char[7][3]
	printf("Taille int %lu \n", sizeof(char[7][3]));
	// taille int
	printf("Taille int %lu \n", sizeof(int[0]));
	*/
	 //PARTIE 2
	 /*
	char tab[10];
	char (*p)[10] = &tab;
		// taille tab
	printf("Taille int %lu \n", sizeof(tab));
		// taille tab
	printf("Taille int %lu \n", sizeof(tab[0]));
		// taille tab
	printf("Taille int %lu \n", sizeof(&tab[0]));
		// taille tab
	printf("Taille int %lu \n", sizeof(*&tab));
		// taille tab
	printf("Taille int %lu \n", sizeof(*&tab[0]));
		//taille pointeur
	printf("Taille int %lu \n", sizeof(p));
		//taille pointeur	
	printf("Taille int %lu \n", sizeof(*p));
		//taille pointeur
	printf("Taille int %lu \n", sizeof((*p)[2]));
		//taille pointeur
	printf("Taille int %lu \n", sizeof(&(*p)[2]));
	*/
	
	// ECHANGE (b)
	
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d : a, et %d :b \n", a, b);
	permutation(&a,&b);
	printf("%d : a, et %d :b \n", a, b);
	return 0;
	
	
	//REINIT
	/*
	int a = 1;
	int* p = &a;
	printf("%p \n", p);
	reinitPointeur(&p);
	printf("%p \n", p);
	*/
}
