#include "main.h"
/**
 * set_string - function to set the value of a pointer to char
 * @s: string to change
 * @to: what to change to
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
