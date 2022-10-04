#include <unistd.h>

/**
 * _putchar - writes the cahrin stdout
 * @c: the charactrer
 *
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
