#include "main.h"
/**
 * Prints lowercase alphabets
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
