#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int isFloat(char *s){
	int i = 1;
	while ( s[i] != '\0'){
		if ( isdigit(s[i]) || s[i] == '-' || s[i] == '.' ) {
			i++;
		}
		else  return 0;
	}
	return 1;
} 
int main(int argc, char** argv)
{
	int i=0;
	int c;
	float b;
	while ( argv[i] != '\0'){
			if ( !isFloat(argv[i])) {
			printf("%c pas un float \n", *argv[i]);
			i++;
		}
		
	}
	printf("%lg\n", b);
	return 0;
}
