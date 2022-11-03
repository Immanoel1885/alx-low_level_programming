#include "lists.h"

/**
 * print_list - function that prints all the elements of a
 * linked list, list_t
 * @h: pointer to the struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes;

	nodes = 0;
	while (h != NULL)
	{

		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
