#include <stdio.h>

/**
*main - program that prints all single digit numbers of base 10 starting from 0
*
*Return: ALways 0
*/
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
