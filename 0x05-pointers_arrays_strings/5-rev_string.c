#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: nothing
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int y;
	char a[1500];

	for (y = 0; s[y] != '\0'; y++)
	{
		a[y] = s[y];
	}
	y--;

	for (; y >= 0; y--)
	{
		s[y] = a[i];
		i++;
	}
	s[i++] = '\0';
}
