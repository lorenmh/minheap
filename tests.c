#include <stdio.h>
#include "minheap.h"

heap_t* create_heap();
void insert(heap_t*, uint8_t, void*);
void print(heap_t*);

int main(int argc, char* argv[]) {
	heap_t *h = create_heap();
	insert(h, 5, NULL);
	insert(h, 2, NULL);
	insert(h, 1, NULL);
	insert(h, 8, NULL);
	insert(h, 4, NULL);
	insert(h, 2, NULL);
	insert(h, 6, NULL);
	insert(h, 10, NULL);
	insert(h, 3, NULL);
	insert(h, 0, NULL);
	insert(h, 9, NULL);
	print(h);
}
