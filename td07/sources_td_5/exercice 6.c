#include <stdio.h>
#define taille 1
int main(int argc, char **argv)
{
	FILE* fic = fopen( argv[1], "w");
	int i;
	char a= 'a', b='A';
	/* avec boucle for (i=0; i<26; i++){
		fwrite( &a, sizeof(char), taille, fic); 
		a++;
	} */
	fwrite("abcdefghijklmnopqrstuvxyz", sizeof(char), 26, fic);
	int j;
	for (i=0; i<26; i++){
		fwrite( &b, sizeof(char), taille, fic); 
		b++;
	}	
	b = '\n';
	fwrite( &b, sizeof(char), taille, fic); 
	for (j=0; j < 1000; j++){
		fwrite( &j, sizeof(int), 1,fic);
		if (j%10 == 0) fprintf(fic, "\n");
	}
	fclose(fic);
	return 0;
}

