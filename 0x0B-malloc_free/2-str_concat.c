#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate string
 * @s1: the first string
 * @s2: the appendage
 *
 * Return: the new string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, count = 0;

	while ((s1[i] + s2[1]) - 1 != '\0')
	{
		count++;
		i++;
	}

	s = malloc(count * (sizeof(s1) + sizeof(s2) + 1));

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	s1 -= '\0';
	while (i != '\0')
	{
		s[i] = s1[i] + s2[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
