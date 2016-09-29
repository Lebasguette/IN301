#include <stdio.h>
#define TLE 256
#define NBC TLE-1
int main(int argc, char **argv)
{
	char str[256];
	FILE *fic = fopen(argv[1],"r");
	unsigned char res[256];
	int r,g,b,i;
	
	/*retire les headers */
	fgets(str, 256, fic);
	printf("%s", str);
	fgets(str, 256, fic);
	printf("%s", str);
	fgets(str, 256, fic);
	printf("%s", str);
	i=0;
	while(argv[2][i] != '\0'){
		fgets(str, 256, fic);
		r = atoi(str) - atoi(str)%4 + (argv[2][i]/64)%4;
		printf("%d \n", r);
		fgets(str, 256, fic);
		g = atoi(str) - atoi(str)%8 + (argv[2][i]/8)%8;
		printf("%d \n", g);
		fgets(str, 256, fic);
		b = atoi(str) - atoi(str)%8 + (argv[2][i])%8;
		printf("%d \n", b);
		i++;
	}
	fgets(str, 256, fic);
	r = atoi(str) - atoi(str)%4 + ('\0'/64)%4;
	printf("%d \n", r);
	fgets(str, 256, fic);
	g = atoi(str) - atoi(str)%8 + ('\0'/8)%8;
	printf("%d \n", g);
	fgets(str, 256, fic);
	b = atoi(str) - atoi(str)%8 + ('\0')%8;
	printf("%d \n", b);
	while (fgets(str,256, fic) != NULL ){
		r = atoi(str);
		printf("%d \n", r);
		fgets(str, 256, fic);
		g = atoi(str);
		printf("%d \n", g);
		fgets(str, 256, fic);
		b = atoi(str);
		printf("%d \n", b);
	}	
		return 0;
}

