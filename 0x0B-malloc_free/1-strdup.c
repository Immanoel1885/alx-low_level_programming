#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to newly allocated space in memory
 * @str: the string allocated to memory
 *
 * Return: NULL if insuficient space, NULL if str is null,
 * pointer to string copy if  success
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, count = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	s = malloc(count * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);
	else if (s == malloc(0))
		return (NULL);
	i = 0;
	while (i < count)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	free(s);
	return (s);
}
