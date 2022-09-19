#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: nothing
 *
 */
void rev_string(char *s)
{
	char r[1000];
	int begin, end, count = 0;

	while (s[count] != '\0')
		count++;
	end = count - 1;

	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	s[begin] = '\0';
	
}
