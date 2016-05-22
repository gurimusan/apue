ROOT=..

CC=gcc
CFLAGS=-ansi -I$(ROOT)/include -Wall -DMACOS -D_DARWIN_C_SOURCE $(EXTRA)
COMPILE.c=$(CC) $(CFLAGS) $(CPPFLAGS) -c

OBJS   = error.o

all: libapue.a

libapue.a: $(OBJS)
	ar rv libapue.a $?
	ranlib libapue.a

clean:
	rm -f *.o a.out core temp.* libapue.a
