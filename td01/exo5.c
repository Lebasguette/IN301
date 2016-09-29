#include <stdio.h>

int main()
{
	int a,b = 0, i;
	
	printf("nombre ? \n");
	scanf("%d", &a);
	if ( (a%2 == 0 && a <10) || a==2){
		printf("%d est un nombre premier \n",a);
		return 0;
	}
	for ( i=2; i <= 10; i++){
		if (a%i == 0){
			printf("%d n'est pas un nombre premier \n",a);
			return 0;
		}
	}
	printf("%d est un nombre premier \n",a);
}
