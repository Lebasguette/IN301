#include <stdio.h>

int main(int argc, char **argv)
{
	int i=0;
	FILE* f= fopen(argv[1], "r");
	while (fgetc(f)!= EOF){
		i++;
	} 
	if (i>1)
	printf("il ya %d charactères man \n", i);
	else 
	printf("il y %d charactère man \n",i);
	return 0;
}

