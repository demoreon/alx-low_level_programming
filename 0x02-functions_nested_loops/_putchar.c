#include <unistd.h>
/**
 * _putchar - output a single character
 * Return: void
 */
int _putchar(char x)
{
	return(write(1, &x, 1));
}
