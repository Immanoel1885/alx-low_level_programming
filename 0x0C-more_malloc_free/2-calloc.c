#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc = function that allocates memory for an arrray of nmemb
 * elements of size bytes each
 * @nmemb: number of elements
 * @size: bytes per elements
 *
 * Return: pointer to alloc memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);
}
