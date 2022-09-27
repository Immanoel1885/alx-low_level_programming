#include "main.h"

/**
 * _strpbrk - function that compares two strings and finds sismilarities
 * @s: the string we'll comare with
 * @accept: the string to be compared
 *
 * Return: s if pass, NULL if fail
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (s);
		}
		s++;
	}
	if (*s != *accept)
	{
		return ('\0');
	}

	return (s);
}
