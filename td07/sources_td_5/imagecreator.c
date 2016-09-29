#include <stdio.h>
#define TLE 256
#define NBC TLE-1
int main(int argc, char **argv)
{
	int i,j,r=0,g=0,b=0;
	printf("P3 \n");
	printf("%d %d \n", TLE, TLE);
	printf("%d \n", NBC);
	for(i=0; i< TLE; i++){
		for(j=0; j < TLE; j++){
			printf("%d %d %d", r, g, b);
			printf("	");
			b++;
		}
		printf("\n");
		b=0;
		r++;
	}
	
	return 0;
}

