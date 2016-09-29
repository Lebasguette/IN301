#include <stdio.h>

int main(int argc, char **argv)
{
	FILE* fic = fopen( argv[1], "w");
	int i,j;
	char a = 'a';
	char b= 'A';
	for (i =0; i < 2; i++){
		for (j =0; j < 26; j++){
			if (i==0)fprintf(fic,"%c", a + j);
			else fprintf(fic, "%c", b + j);
		}
	fprintf(fic, "\n");
	} 
	for (j=0; j < 1000; j++){
		fprintf(fic, "%4d", j);
		if (j%10 == 0) fprintf(fic, "\n");
	}
	fclose(fic);
	return 0;
}

