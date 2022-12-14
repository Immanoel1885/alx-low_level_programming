#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function to reallocate memory for ptr
 * @ptr: pointer to array
 * @old_size: old memory bytes
 * @new_size: new memory bytes
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
