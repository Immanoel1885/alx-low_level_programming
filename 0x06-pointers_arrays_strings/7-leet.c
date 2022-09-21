#include "main.h"
/**
 * leet - function that encodes string into 1337
 * @s: string input
 *
 * Return: @s
 */
char *leet(char *s)
{
	int i, c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate the values in array s*/
	while (s[c] != '\0')
	{
		/**
		 * loop through array five times
		 * to check if value euals any of the 
		 * above ascii characters
		 * if it is replace with the corresponding
		 * value in the n array
		 */
		for (i = 0; i < 5; i++)
		{
			if (s[c] == sl[i] || s[c] == ul[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
