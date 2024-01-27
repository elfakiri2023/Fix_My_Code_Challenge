#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - doubly list
 * @n: number
 * @prev: previous node
 * @next: next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} initlist_t;

initlist_t *add_to_end(initlist_t **head, const int n);
size_t initlist_print(const initlist_t *h);
int delete_at_index(initlist_t **head, unsigned int index);
void free_list(initlist_t *head);

#endif

