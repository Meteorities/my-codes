main: main.o tool1.o tool2.o tool3.o
	$(tool1.o)
	$(tool2.o)
	$(tool3.o)
	$(main.o)
	gcc -o main tool1.o tool2.o tool3.o main.o

tool1.o:tool1.c
	gcc -c tool1.c

tool2.o:tool2.c
	gcc -c tool2.c

tool3.o:tool3.c
	gcc -c tool3.c

main.o:main.c
	gcc -c main.c

.PHONY=clear
clear:
	rm -f *.o
