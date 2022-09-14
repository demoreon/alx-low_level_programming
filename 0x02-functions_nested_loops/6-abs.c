#include "main.h"
/**
 * _abs - checks for Absolute Value
 * @n: Checker
 * Return: ABS
 */

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
