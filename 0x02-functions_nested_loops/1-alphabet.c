#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets
 *
 * Returns: Void
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
