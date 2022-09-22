#include "main.h"
/**
 * rot13 - function that encodes tring using the rot13 method
 * @s: the string to be encoded
 * Return: result
 */
char *rot13(char *s)
{
	int i;
	int j;

	char alphs[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphs[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
