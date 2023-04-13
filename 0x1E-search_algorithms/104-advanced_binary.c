#include "search_algos.h"

/**
 * recu_s - searches array
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: idex of the number
 */
int recu_s(int *array, size_t size, int value)
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
	{
		if (middle > 0)
			return (recu_s(array, middle + 1, value));
		return ((int)middle);
	}

	if (value < array[middle])
		return (recu_s(array, middle + 1, value));

	middle++;
	return (recu_s(array + middle, size - middle, value) + middle);
}

/**
 * advanced_binary - calls to recu_s to return
 * the idex of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: idex of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idex;

	idex = recu_s(array, size, value);

	if (idex >= 0 && array[idex] != value)
		return (-1);

	return (idex);
}
