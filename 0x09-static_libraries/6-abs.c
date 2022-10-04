#include "main.h"
/**
 * _abs - finds the absolute value of a number
 * Description: this function recieves an int argument
 * @c: the argument well be using
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);

}
