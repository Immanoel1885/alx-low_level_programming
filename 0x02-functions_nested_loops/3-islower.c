#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _islowe - Entry point
 * Description: checks if a given letter is lowercase
 * Return: 0 or 1
 */
int _islower(int c)
{
	

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}else
	{
		return (0);

	}

}
