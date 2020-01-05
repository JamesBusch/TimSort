cc = gcc
CFLAGS = -std=c99 -Wall -g -pedantic
objects = main.o insertionSort.o timSort.o

all:timSort

timSort: $(objects)
	$(CC) $(objects) -o $@

main.o: main.c *.h
	$(CC) $(CFLAGS) -c main.c -o $@

insertionSort.o: insertionSort.c
	$(CC) $(CFLAGS) -c insertionSort.c -o $@

timSort.o: timSort.c
	$(CC) $(CFLGAS) -c timSort.c -o $@

run:
	./timSort

clean:
	rm ./*.o timSort