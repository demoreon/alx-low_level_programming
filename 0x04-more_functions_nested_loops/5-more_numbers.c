#include "main.h"
/**
 * more_numbers - checks for digit
 * Return: 0 Success
 */

void more_numbers(void)
{
	int n;
	int y;

	for (n = 0; n < 10; n++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar(y / 10 + 48);
				_putchar(y % 10 + 48);
			}
			else
				_putchar(y + 48);
		}
		_putchar('\n');
	}
}
