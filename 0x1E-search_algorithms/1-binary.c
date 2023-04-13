#include "search_algos.h"

/**
 * rsearch - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search within array
 * Return: cnt of the number
 */
int rsearch(int *array, size_t size, int value)
{
	size_t middle = size / 2;
	size_t n;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (n = 0; n < size; n++)
		printf("%s %d", (n == 0) ? ":" : ",", array[n]);

	printf("\n");

	if (middle && size % 2 == 0)
		middle--;

	if (value == array[middle])
		return ((int)middle);

	if (value < array[middle])
		return (rsearch(array, middle, value));

	middle++;

	return (rsearch(array + middle, size - middle, value) + middle);
}

/**
 * binary_search - calls to binary_search to return
 * the cnt of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in array
 * Return: cnt of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int cnt;

	cnt = rsearch(array, size, value);

	if (cnt >= 0 && array[cnt] != value)
		return (-1);

	return (cnt);
}
