#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: program that prints the opcodes of ts own main function
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: success
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	char *opcode = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < number_of_bytes)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i != number_of_bytes - 1)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
