#include <stdio.h>

/**
 * main  - print the string in the function
 *
 * Description: using the main function
 * this programme retyurns the size of varios types in the computrer it is run 
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(li));
	printf("size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
