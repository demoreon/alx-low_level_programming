#include "main.h"
/**
 * _islower - checks for lower
 * @c: Checker
 * Return: 1 if true or 0 for false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
    	{
		return (1);
	}
	else
		return (0);
}
