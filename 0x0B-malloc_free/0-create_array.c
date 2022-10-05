#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: the size of array
 * @c: the initial value
 *
 * Return: NULL is size is 0 or if fail. create_array if success
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
