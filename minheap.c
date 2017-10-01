#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "minheap.h"

heap_t* create_heap() {
	heap_t *h = malloc(sizeof(heap_t));

	h->size = 0;
	h->buf_size = MINHEAP_BUF_SIZE_INIT;
	h->buf = malloc(MINHEAP_BUF_SIZE_INIT * sizeof(node_t));

	return h;
}

void print(heap_t *h) {
	for (int i = 0; i < h->size; i++) {
		printf("%d\t", (h->buf[i]).priority);
	}
	printf("\n");
}

void insert(heap_t *h, uint8_t priority, void *value) {
	// resize the priority queue's buffer
	if (h->size + 1 >= h->buf_size) {
		h->buf_size = h->buf_size * MINHEAP_BUF_SIZE_FACTOR;
		h->buf = realloc(h->buf, h->buf_size);
	}

	uint8_t index = h->size++;
	node_t *buf = h->buf;

	// add element to bottom of heap
	buf[index] = (node_t) { priority, value };

	// swap with parents until heap constraints satisfied
	while(index > 0) {
		uint8_t parent_index = (index - 1) / 2;

		node_t parent = buf[parent_index];

		// parent is already smaller, do not swap
		if (parent.priority <= priority) break;

		// swap parent with child
		node_t tmp = buf[parent_index];
		buf[parent_index] = buf[index];
		buf[index] = tmp;

		// set index to parent index
		index = parent_index;
	}
}

void *extract(heap_t *h) {
	return NULL;
}

void free_heap(heap_t *h) {
	free(h->buf);
	free(h);
}
