#include "main.h"
/**
 * _puts - write a new line to the stdout
 * @str: the string thaat gets a new line
 * Return: nothing
 *
 */
void _puts(char *str)
{
	char *p;

	p = str;

	for (; *str != '\0'; str ++)
		_putchar(*p); 
	_putchar('\n');
}

