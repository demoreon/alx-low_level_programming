#include <unistd.h>
#include "main.h"
/**
 * main - Prints putchar
 *
 * Return: Returns 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwzyz\n", 27);

}
