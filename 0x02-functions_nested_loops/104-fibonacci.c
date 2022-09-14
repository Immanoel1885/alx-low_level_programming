#include "main.h"
/**
 * numLength - return length of string
 * @num: operand number
 * Return: number of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10 ;
		length += 1;
	}
	return (length);
}
/**
 * main - Entry point
 * Description: prints the first 98 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;
	for (count = 1; count <= 98; ++count)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLength(mx)
	}
}
