#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * main - test magna

 * Return: 0 End
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
