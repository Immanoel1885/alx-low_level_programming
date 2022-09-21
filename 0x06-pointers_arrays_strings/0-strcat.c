#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings together
 * @dest: the main beginning string
 * @src: the appendage string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{ 
	int c, c2;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/*iterate through each src array value without null byte*/
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
