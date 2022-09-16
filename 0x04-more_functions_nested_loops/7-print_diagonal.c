#include "main.h"
/**
 * print_diagonal - prints 10 times the numbers, from 0 to 14.
 *@n: parameter
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < i; j++)
				_putchar(' ');
		}
	}
}
