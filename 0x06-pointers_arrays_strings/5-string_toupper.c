#include "main.h"
/**
 * *string_toupper - function to turn lowercase letters into upper case
 * @s: tthe string to be uppercased
 * Return: @s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] + 32;
		}
		i++;
	}
	return (0);
}
