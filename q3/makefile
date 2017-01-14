install:
	mv calc_lcm_gcd /usr/bin
all: main.o gcd.o lcm.o
	gcc main.o gcd.o lcm.o -o calc_lcm_gcd;
main.o: main.c
	gcc -c main.c
gcd.o: gcd.c
	gcc -c gcd.c
lcm.o: lcm.c
	gcc -c lcm.c
clean:
	rm *.o
