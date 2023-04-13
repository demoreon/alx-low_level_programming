#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value using the Jump search algorithm
 *
 * @list: input list
 * @size: size
 * @value: value to search
 * Return: ix of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t ix, j, n;
	listint_t *pv;

	if (list == NULL || size == 0)
		return (NULL);

	n = (size_t)sqrt((double)size);
	ix = 0;
	j = 0;

	do {
		pv = list;
		j++;
		ix = j * n;
		while (list->next && list->index < ix)
			list = list->next;

		if (list->next == NULL && ix != list->index)
			ix = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)ix, list->n);

	} while (ix < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)pv->ix, (int)list->ix);

	for (; pv && pv->index <= list->index; pv = pv->next)
	{
		int k;

		k = (int)pv->index;
		printf("Value checked at index [%d] = [%d]\n", k, pv->n);
		if (pv->n == value)
			return (pv);
	}

	return (NULL);
}
