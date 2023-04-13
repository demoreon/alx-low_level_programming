#include "search_algos.h"

/**
 * interpolation_search - searches an array for a value using Interpolation
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search within array
 * Return: index of the result
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, sm, big;
	double f_s;

	if (array == NULL)
		return (-1);

	sm = 0;
	big = size - 1;

	while (size)
	{
		f_s = (double)(big - sm) / (array[big] - array[sm]) * (value - array[sm]);
		position = (size_t)(sm + f_s);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			sm = position + 1;
		else
			big = position - 1;

		if (sm == big)
			break;
	}

	return (-1);
}
