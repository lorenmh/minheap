#include <stdint.h>

#ifndef __MINHEAP_H__
#define __MINHEAP_H__

#define MINHEAP_BUF_SIZE_INIT 8
#define MINHEAP_BUF_SIZE_FACTOR 2

typedef struct node_t {
	uint8_t priority;
	void *value;
} node_t;

typedef struct heap_t {
	uint8_t size;
	uint8_t buf_size;
	node_t *buf;
} heap_t;

#endif
