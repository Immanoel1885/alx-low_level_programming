#include "main.h"

/**
 * _strstr - function that finds a needle in a haystack
 * @needle: the substring to be found
 * @haystack: the main string which  amy contain substring
 *
 * Return: needle if pass, NULL if fail
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;

		for (j = 0; needle[j] < '\0'; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (j == haystack[i])
			return (needle);
		else
			return ('\0');
	}

	return (needle);

}
