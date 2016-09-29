#include <stdio.h>

int main()
{
	int a,b, i = 0;
	
	printf("saisir les nombres à multiplier de manière EGYPTIENNE ? \n");
	scanf("%d %d", &a, &b);
	printf("%d x %d \n", a, b);
	while (a != 1){
		if (a%2 == 0){
			a = a/2;
			b = 2*b;
		}
		else {
			a--;
			i = i+b;
		} 
		if (i >0)
			printf(" = %d x %d + %d \n", a, b, i);
		else 
		printf(" = %d x %d \n", a, b);
	}
	printf(" = %d \n", b + i);
}
