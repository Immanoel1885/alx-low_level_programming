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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
			return ('\0');
	}
	return (s);
}
