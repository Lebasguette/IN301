#include <stdio.h>
int rand_a_b(int a, int b){
    return rand()%(b-a) +a;
}
void remplissage(int T[],int  n){
	int i;
	for ( i=0; i <n; i++)
	{
		T[i]= rand_a_b(0,20);
		
	}
}
void afftab(int T[], int n){
	int i;
	for ( i=0; i <n; i++)
	{
		printf("%d \n", T[i]);
	}
}
void multi(int T[], int n){
	int i,b=1;
	for ( i=0; i <n; i++)
	{
		b= T[i]*b;
	}	
}
int min(int T[], int n){
	int i,a= T[0];
	for ( i=1; i <n; i++)
	{
		if (a > T[i]){
			a =T[i];
	}
	return a;
}
}
void decal(int T[], int n, int a){
	int i;
	for ( i=n; i >0; i--)
	{
		T[i]= T[i-1];
	}	
	T[0]=0;
}	
int main()
{
	int n,i;
	printf("saisir la taille du tableau");
	scanf("%d", &n);
	srand(time(NULL)); 
	int T[n];
	remplissage( T, n);
	afftab(T, n);
	
	printf("apres \n");
	afftab(T, n);
	
}
