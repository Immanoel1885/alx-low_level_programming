#include <stdio.h>

/**
 * main - entry point
 * Description: function that prints the number of arguments parsed into it
 * @argc: args count
 * @argv: args strings
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
