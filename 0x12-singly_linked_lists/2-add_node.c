#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: adddress of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t length;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	for (string = 0; str[string]; string++);

	node->len = length;
	node->next = *head;
	*head = node;

	return (*head);
}
