#include "main.h"

/**
 * scout - function check for prime number
 * @n: number
 * @m: half of n
 *
 * Return: 1 or 0
 */
int scout(int n, int m)
{
	if (m == 1)
		return (1);
	else
	{
		if ((n % m) == 0)
			return (0);
		else
			return (scout(n, m - 1));
	}
}
/**
 * is_prime_number - function that return 1 if prime, 0 is else
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (scout(n, n / 2));
}
