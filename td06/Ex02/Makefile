#pi.o : pi.h
#	gcc -c pi.h -o pi.o
circonference.o : circonference.c circonference.h
	gcc -c circonference.c -o circonference.o	
surface.o : surface.c surface.h
	gcc -c surface.c -o surface.o
main.o : main.c
	gcc -c main.c -o main.o
All : pi.h circonference.o surface.o main.o
	gcc pi.h circonference.o surface.o main.o
clean : 
	rm -f *.o
	rm -f *.out
