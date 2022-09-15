#include <stdio.h>
/**
 * largest_prime_factor - prints largest prime factor
 * @num: number to be found
 */

void largest_prime_factor(long int num)
{
	int prmnu, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prmnu = 3; prmnu <= _sqrt(num); prmnu += 2)
	{
		while (num % prmnu == 0)
		{
			num = num / prmnu;
			largest = prmnu;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}
