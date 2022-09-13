#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase X10
 *
 * Returns: Void
 */

void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
