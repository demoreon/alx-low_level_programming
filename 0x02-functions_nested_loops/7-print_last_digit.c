#include "main.h"
/**
 * print_last_digit- checks for Absolute Value
 * @n: Checker
 * Return: ABS
 */

int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (lst < 0)
		lst = -lst;

	_putchar(lst + '0');
	return (lst);
}
