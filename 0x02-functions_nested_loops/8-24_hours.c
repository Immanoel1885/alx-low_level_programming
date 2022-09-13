#include "main.h"
/**
 * jack_bauer - function prints every minute of the day
 * Return:  0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_rem;
	int mins_rem;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			hours_rem = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_rem + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		mins_rem = 0;
	}
}
