#include <stdio.h>
/**
 * main - print the alphabet
 * Description: using the main fuction
 * this prints out the eng alph
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}	
	}
	putchar ('\n');
	return (0);
}
