#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 * @array: Input
 * @size: Size of the array to search
 * @value: Item to search for.
 * Return: The output if found or -1 for error.
 */
int linear_search(int *array, size_t size, int value)
{
	int cnt;

	if (array == NULL)
		return (-1);

	for (cnt = 0; cnt < (int)size; cnt++)
	{
		printf("Value checked array[%u] = [%d]\n", cnt, array[cnt]);
		if (value == array[cnt])
			return (cnt);
	}
	return (-1);
}
