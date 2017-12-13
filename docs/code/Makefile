
PDIR = ../../..

a.out: main.c
	gcc main.c -g -O0 -rdynamic -Wall -I$(PDIR)/include -L$(PDIR)/.libs -luv

clean:
	rm -f a.out

run:
	LD_LIBRARY_PATH="$(PDIR)/.libs" ./a.out
