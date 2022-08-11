#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct lists_s - singly linked list
 * @str: this is a malloc'd string
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
