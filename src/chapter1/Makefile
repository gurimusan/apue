ROOT = ../..

CC = gcc
LDDIR = -L$(ROOT)/lib
LDLIBS = $(LDDIR) -lapue $(EXTRALIBS)
CFLAGS = -ansi -I$(ROOT)/include -Wall -std=c99 -DMACOS -D_DARWIN_C_SOURCE $(EXTRA)

PROGS = figure_1.3 figure_1.4 figure_1.5 figure_1.6 figure_1.7 figure_1.8 figure_1.9

all: $(PROGS)

%: %.c $(ROOT)/lib/libapue.a
	$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) *.out *.o
