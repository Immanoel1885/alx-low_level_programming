#include "main.h"

/**
 * _strchr - function that locates a given char in a strin
 * @s: the string given
 * @c: the character to be foundin the s string
 *
 * Return: c if pass , NULL if fail
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s != c)
	{
		return ('\0');
	}

	return (s);
}
