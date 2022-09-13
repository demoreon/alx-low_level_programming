#include <unistd.h>

/**
 * _putchar - output a single character
 * Return: void
 */
void _putchar(char x)
{
	write(1, &x, 1);
}
