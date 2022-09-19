#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randpassword - generates a random, valid, password
 * @N: the argument to be passed
 * Return: nothing
 *
 */
void randpassword(int N)
{
	int i = 0;
	int random = 0;
	char numbers[10];
	char letter[]26;
	char LETTER[26];
	char symbols[9];

	srand((unsigned int) (time(NULL)));

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$%^&*?";
	char password[N];

	random  = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbols[rand() % 9];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = LETTER[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else 
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
	printf("\n");

}

/**
 * main - function that calls randpassword
 * Return: 0;
 */

int main()
{
	int N = 10;

	randpassword(N);
	return (0);
}
