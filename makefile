cc = gcc
CFLAGS = -std=c99 -Wall -g -pedantic -I$(IDIR)
objects = $(BINDIR)main.o $(BINDIR)insertionSort.o $(BINDIR)timSort.o $(BINDIR)mergeSort.o $(BINDIR)utils.o

IDIR = ./includes/
SRCDIR = ./src/
BINDIR = ./bin/

SOURCES = $(SRCDIR) *.c

all:createBin $(BINDIR)timSort

$(BINDIR)timSort: $(objects)
	$(CC) $(objects) -o $@

$(BINDIR)main.o: $(SRCDIR)main.c $(IDIR)*.h
	$(CC) $(CFLAGS) -c $(SRCDIR)main.c -o $@

$(BINDIR)insertionSort.o: $(SRCDIR)insertionSort.c
	$(CC) $(CFLAGS) -c $(SRCDIR)insertionSort.c -o $@

$(BINDIR)timSort.o: $(SRCDIR)timSort.c
	$(CC) $(CFLGAS) -c $(SRCDIR)timSort.c -o $@

$(BINDIR)mergeSort.o: $(SRCDIR)mergeSort.c
	$(CC) $(CFLAGS) -c $(SRCDIR)mergeSort.c -o $@

$(BINDIR)utils.o: $(SRCDIR)utils.c
	$(CC) $(CLFAGS) -c $(SRCDIR)utils.c -o $@

createBin:
	[ -d $(BINDIR) ] || mkdir -p $(BINDIR)

run:
	$(BINDIR)timSort

clean:
	rm $(BINDIR)*.o $(BINDIR)timSort