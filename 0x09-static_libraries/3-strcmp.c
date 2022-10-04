#include "main.h"
#include <string.h>
/**
 * _strcmp - fuction that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;
	/* iterate through s1 and s2 */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/*if they differ by one caharcter, stop*/
		if (s1[i] != s2[i])
		{
			/*return the differecne*/
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
