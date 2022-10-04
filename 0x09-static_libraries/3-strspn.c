#include "main.h"

/**
 * _strspn - function to  get the length of a prefix substring
 * @s: string to be compared with
 * @accept: string to compare
 *
 * Return: always count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (i != '\0')
	{
		int j = 0;

		while (j != '\0')
		{

			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}

	return (count);
}
