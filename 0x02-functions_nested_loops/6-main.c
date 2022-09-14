#include <stdio.h>
#include "main.h"

/**
 * main - test magna

 * Return: 0 End
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
       	return (0);
}
