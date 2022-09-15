#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: Checker
 * Return: 1 if true or 0 for false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
