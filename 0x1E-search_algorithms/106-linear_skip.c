#include "search_algos.h"

/**
 * linear_skip - searches for a value before skipping
 *
 * @list: inputs to process
 * @value: value to process
 * Return: index of result
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *next;
	int k;

	if (list == NULL)
		return (NULL);

	next = list;

	do {
		list = next;
		next = next->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)next->index, next->n);
	} while (next->express && next->n < value);

	if (next->express == NULL)
	{
		list = next;
		while (next->next)
			next = next->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)next->index);

	while (list != next->next)
	{
		k = (int)list->index;
		printf("Value checked at index [%d] = [%d]\n", k, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
