#include <stdio.h>

/**
 * main - entry point
 * Description: prints the name of the program
 * @argc: argument count
 * @argv: argument strings
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
