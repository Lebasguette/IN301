#construit le fichier binaire graphics.o
graphics.o: graphics.c graphics.h
	rm -f police.h
	touch police.h
	if test -e /usr/include/SDL_ttf.h;           then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/include/SDL/SDL_ttf.h;       then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL_ttf.h;     then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL/SDL_ttf.h; then echo "#define SDL_TTF_OK" > police.h; fi
	gcc -Wall `sdl-config --cflags`  -c graphics.c

fonctions.o: fonctions.c
	gcc -c fonctions.c -o fonctions.o
 
main.o : main.c
	gcc -c main.c -o main.o

all : graphics.o fonctions.o main.o
	gcc graphics.o fonctions.o main.o `sdl-config --libs` -lm -lSDL_ttf

run: a.out
	./a.out

clear : 
	rm -f *.o
	rm -f *.out
