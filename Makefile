all: lab3.zip lab3

lab3.zip: Makefile lab3main.c lab3.h populateFav.c populateTitles.c saveFile.c
	zip lab3main.c lab3.h populateFav.c populateTitle.c saveFile.c

lab3: lab3.o populateFav.o populateTitles.o saveFile.o
	gcc lab3.o populateFav.o populateTitles.o saveFile.o -o lab3

lab3.o: lab3.c lab3.h
	gcc -ansi -pedantic -g -c lab3.c

populateTitles.o: populateTitles.c lab3.h
	gcc -ansi -pedantic -g -c populateTitles.c

populateFav.o: populateFav.c lab3.h
	gcc -ansi -pedantic -g -c populateFav.c

#Make the object files for saveFile.c
saveFile.o: saveFile.c lab3.h
	gcc -ansi -pedantic -g -c saveFile.c

clean:
	rm -rf *.o lab3