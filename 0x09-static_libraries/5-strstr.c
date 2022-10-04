#include "main.h"

/**
 * _strstr - function that locates a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: always haystack
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *need = needle;

		while (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}
		if (*need == '\0')
			return (haystack);
	}
	return ('\0');
}
