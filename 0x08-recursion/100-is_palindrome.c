#include "main.h"

/**
 * length - function to return the length of a string
 * @s: string
 *
 * Return: length
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}
/**
 * checker - function to compare the strings
 * @s: string
 * @start: beginning of string
 * @end: end of string
 *
 * Return: 1 or 0
 */
int checker(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == end + 1)
			return (1);
		return (0 + checker(s, start + 1, end - 1));
	}
	return (0);
}
/**
 * is_palindrome - function to check for palindrome string
 * @s: string
 *
 * Return: 1 if palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (10);
	return (checker(s, 0, length(s) - 1));
}
