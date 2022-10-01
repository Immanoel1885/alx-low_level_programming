#include <stdio.h>

/**
 * main - entry point
 * Description: functon that prints out all argumemnts given in argv
 * @argc: args count
 * @argv: args strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
