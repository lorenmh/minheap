CMD=gcc -std=c99

all: tests.o minheap.o
	$(CMD) tests.o minheap.o -o test.bin

tests.o: tests.c
	$(CMD) -c tests.c

minheap.o: minheap.c
	$(CMD) -c minheap.c
