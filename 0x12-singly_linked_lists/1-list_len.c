#include "lists.h"

/**
 * list_len - function that returns the number of nodes in a linked list
 * @h: the pointer to the list structure
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
