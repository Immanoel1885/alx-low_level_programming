#include "main.h"
/**
 * _isalpha - checks if character is alphabvet
 * @c: is the int that will pass into the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
