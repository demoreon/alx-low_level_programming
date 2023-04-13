#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: idex of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int idex, j, l, pv;

	if (array == NULL || size == 0)
		return (-1);

	j = (int)sqrt((double)size);
	l = 0;
	pv = idex = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idex, array[idex]);

		if (array[idex] == value)
			return (idex);
		l++;
		pv = idex;
		idex = l * j;
	} while (idex < (int)size && array[idex] < value);

	printf("Value found between indexes [%d] and [%d]\n", pv, idex);

	for (; pv <= idex && pv < (int)size; pv++)
	{
		printf("Value checked array[%d] = [%d]\n", pv, array[pv]);
		if (array[pv] == value)
			return (pv);
	}

	return (-1);
}
