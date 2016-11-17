#include <stdio.h>

void ecrire (SUDOKU S){
	FILE *f = fopen ("sudoku.sudo", "w");
	int i,j;
	
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++){
			fprintf( f,"%d ", S.la_case[x][y].val);
		}
		fprintf(f,"\n");
	}
fclose(f);
