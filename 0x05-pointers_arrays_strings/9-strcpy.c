#include "main.h"

/**
 * *_strcpy - prints the copy of a string
 * @src: the string
 * @dest: the return value of the fuction
 * Return: dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
