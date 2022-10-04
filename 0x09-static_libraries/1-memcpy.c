#include "main.h"

/**
 * _memcpy - function tha copies a a memory area from a source to a destination
 * @dest: the destination to which the string is copied
 * @src: the source array from which our text will be copied
 * @n: the number of characters we'll copy
 *
 * Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*intialize your iterators*/
	unsigned int i = 0, j = 0;

	/*copy n length of string from the source to the dest*/
	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
