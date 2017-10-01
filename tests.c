#include <stdio.h>
#include "minheap.h"

heap_t *create_heap();
void insert(heap_t*, uint16_t, void*);
void *extract(heap_t*);
void print(heap_t*);
int is_empty(heap_t*);
void free_heap(heap_t*);

int main(int argc, char* argv[]) {
	heap_t *h = create_heap();
	insert(h, 5, (void *)1);
	insert(h, 2, (void *)2);
	insert(h, 1, (void *)3);
	insert(h, 8, (void *)4);
	print(h);

	while (!is_empty(h)) {
		int extracted = (int) extract(h);
		printf("extracted: %d\n", extracted);
		print(h);
	}

	free_heap(h);
}
