cc = gcc
CFLAGS = -std=c99 -Wall -g -pedantic -I$(IDIR)
objects = $(BINDIR)main.o $(BINDIR)arrUtils.o $(BINDIR)insertionSort.o $(BINDIR)timSort.o $(BINDIR)mergeSort.o $(BINDIR)insertionSortTest.o $(BINDIR)mergeSortTest.o

IDIR = ./includes/
SRCDIR = ./src/
BINDIR = ./bin/

all:createBin $(BINDIR)timSort

$(BINDIR)timSort: $(objects)
	$(CC) $(objects) -o $@

$(BINDIR)main.o: $(SRCDIR)main.c
	$(CC) $(CFLAGS) -c $(SRCDIR)main.c -o $@

$(BINDIR)insertionSort.o: $(SRCDIR)insertionSort.c
	$(CC) $(CFLAGS) -c $(SRCDIR)insertionSort.c -o $@

$(BINDIR)timSort.o: $(SRCDIR)timSort.c
	$(CC) $(CFLGAS) -c $(SRCDIR)timSort.c -o $@

$(BINDIR)mergeSort.o: $(SRCDIR)mergeSort.c
	$(CC) $(CFLAGS) -c $(SRCDIR)mergeSort.c -o $@

$(BINDIR)insertionSortTest.o: $(SRCDIR)insertionSortTest.c
	$(CC) $(CFLAGS) -c $(SRCDIR)insertionSortTest.c -o $@

$(BINDIR)mergeSortTest.o: $(SRCDIR)mergeSortTest.c
	$(CC) $(CFLAGS) -c $(SRCDIR)mergeSortTest.c -o $@

$(BINDIR)arrUtils.o: $(SRCDIR)arrUtils.c
	$(CC) $(CLFAGS) -c $(SRCDIR)arrUtils.c -o $@

createBin:
	[ -d $(BINDIR) ] || mkdir -p $(BINDIR)

run:
	$(BINDIR)timSort

clean:
	rm $(BINDIR)*.o $(BINDIR)timSort