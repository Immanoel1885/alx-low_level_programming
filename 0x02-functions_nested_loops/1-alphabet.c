#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - used with main function
 * Description: prints out the alphabet in loercase
 * Return: 0
 */
void print_alphabet(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
}
