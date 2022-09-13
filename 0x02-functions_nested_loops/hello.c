#include "main.h"
/**
 * print_alphabet - Prints lowercase X10
 *
 * Returns: Void
 */

void print_alphabet_x10(void)
{
	int y;

	for (y = 1; y <= 10; y++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
