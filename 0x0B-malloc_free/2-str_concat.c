#include "main.h"
#include <stdlib.h>
/**
 * _strlen - function to return length of string
 * @s: string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
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
	int i = 0, j = 0, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	count = (_strlen(s1) + _strlen(s2) + 1);

	s = malloc(count * sizeof(char));

	if (s == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
