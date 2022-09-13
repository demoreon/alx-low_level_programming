#include <unistd.h>

/**
 * _putchar - output a single character
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
