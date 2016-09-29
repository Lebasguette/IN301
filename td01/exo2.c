#include <stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("saisir le nombre de secondes \n");
	scanf("%d", &a);
	b = a/3600;
	c = (a%3600)/60;
	d = a%60;
	printf("celà fait : \n %d h %d m %d s \n", b, c,d); 
	



}
