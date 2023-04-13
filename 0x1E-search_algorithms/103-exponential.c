#include "search_algos.h"

/**
 * rsearch - integers using the Binary search algorithm
 *
 * @array: inputs
 * @size: size of the array to search
 * @value: value to search
 * Description: Binary search banter
 *
 * Return: idex of the value returned
 */
int rsearch(int *array, size_t size, int value)
{
	size_t middle = size / 2;
	size_t cnt;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (cnt = 0; cnt < size; cnt++)
		printf("%s %d", (cnt == 0) ? ":" : ",", array[cnt]);

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
 * binary_search - conduct the search using the BS
 *
 * @array: inputs
 * @size: size of the array to search
 * @value: value to search
 * Return: idex of the value returned
 */
int binary_search(int *array, size_t size, int value)
{
	int idex;

	idex = rsearch(array, size, value);

	if (idex >= 0 && array[idex] != value)
		return (-1);

	return (idex);
}

/**
 * exponential_search - searches for a value within an array
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: idex of the returned value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idex, next_t;
	int output;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	idex = 1;

	while (array[idex] < value && idex < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idex, array[idex]);
		idex *= 2;
	}

	next_t = (idex >= size) ? (size - 1) : idex;

	idex /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)idex, (int)next_t);

	output = binary_search(array + idex, (next_t + 1) - idex, value);

	if (output >= 0)
		output += idex;

	return (output);
}
