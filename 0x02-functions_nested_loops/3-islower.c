#include <stdio.h>
#include "main.h"
/**
 * _islowe - Entry point
 * Description: checks if a given letter is lowercase
 * Return: 0 or 1
 */
int _islower(int c)
{
	

	if (islower(c))
	{
		return (1);
	}else
	{
		return (0);

	}

}
