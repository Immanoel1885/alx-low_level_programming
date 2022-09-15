#include "main.h"
/**
 * more_numbers - prints ten times number 0 - 14
 * Return: 0
 */
void more_numbers(void)
{
	int t = 0;
	int num;

	while (t < 10)
	{
		for (num = 48; num < 58; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
		t++;
	}
}
