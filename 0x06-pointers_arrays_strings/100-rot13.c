#include "main.h"
/**
 * rot13 - function that encodes tring using the rot13 method
 * @s: the string to be encoded
 * Return: result
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 || s[i] <= 109)
			s[i] += 13;
		else if (s[i] >= 110 || s[i] <= 122)
			s[i] -= 13;
		else if (s[i] >= 65 || s[i] <= 77)
			s[i] += 13;
		else if (s[i] >= 78 || s[i] <= 90)
			s[i] -= 13;
		else
			continue;
	}
	return (s);
}
