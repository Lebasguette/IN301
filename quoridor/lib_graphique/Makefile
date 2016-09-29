
#construit le fichier binaire graphics.o
graphics.o: graphics.c graphics.h
	rm -f police.h
	touch police.h
	if test -e /usr/include/SDL_ttf.h;           then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/include/SDL/SDL_ttf.h;       then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL_ttf.h;     then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL/SDL_ttf.h; then echo "#define SDL_TTF_OK" > police.h; fi
	gcc -Wall `sdl-config --cflags`  -c graphics.c

affiche.o : affiche.c
	gcc -c affiche.c -o affiche.o
structures.o : structures.c
	gcc -c structures.c -o structures.o
fonctions_jeu.o: fonctions_jeu.c
	gcc -c fonctions_jeu.c -o fonctions_jeu.o
main.o : main.c
	gcc -c main.c -o main.o
all: graphics.o structures.o fonctions_jeu.o affiche.o main.o 
	gcc graphics.o structures.o fonctions_jeu.o affiche.o main.o `sdl-config --libs` -lm -lSDL_ttf
run : a.out
	./a.out
clear : 
	rm -f *.o
	rm -f *.out
