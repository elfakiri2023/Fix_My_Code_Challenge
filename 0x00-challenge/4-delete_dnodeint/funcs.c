#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * initlist_print - initlist_print
 * @h: pointer
 * Return: number
 */
 
size_t initlist_print(const initlist_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

/**
 * free_list - free
 *
 * @head: pointer
 */
void free_list(initlist_t *head)
{
	initlist_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}

/**
 * delete_at_index - delete node
 *
 * @head: pointer
 * @index: index
 * Return: 1 on success.
 */
int delete_at_index(initlist_t **head, unsigned int index)
{
	initlist_t *saved_head;
	initlist_t *tmp;
	unsigned int p;

	if (*head == NULL)
	{
		return (-1);
	}
	saved_head = *head;
	p = 0;
	while (p < index && *head != NULL)
	{
		*head = (*head)->next;
		p++;
	}
	if (p != index)
	{
		*head = saved_head;
		return (-1);
	}
	if (0 == index)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
	}
	else
	{
		(*head)->prev->next = (*head)->next;
		free(*head);
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		*head = saved_head;
	}
	return (1);
}

/**
 * add_to_end - node
 *
 * @head: the head
 * @n: The number
 *
 * Return: A pointer to the new element
 */
initlist_t *add_to_end(initlist_t **head, const int n)
{
	initlist_t *new;
	initlist_t *l;

	new = malloc(sizeof(initlist_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	l = *head;
	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = new;
	new->prev = l;
	return (new);
}

