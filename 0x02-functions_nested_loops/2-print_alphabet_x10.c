#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: print out the alphabet ten times in lower case
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ab;
	int i = 0;

	while (i < 10)
	{
		for (ab = 'a'; ab <= 'z'; ab++)
		{
			putchar(ab);
		}

		i++;
		putchar('\n');
	}
}
