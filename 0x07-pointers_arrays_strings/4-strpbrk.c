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
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i)
			}
			j++;
		}
		i++;
	}
	if (s[i] != accept[j])
	{
		return ('\0');
	}
}
