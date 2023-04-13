#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches array
 *
 * @list: inputs to search
 * @size: size of the array
 * @value: value to search within the array
 * Return: index of result
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, l, j;
	listint_t *p;

	if (list == NULL || size == 0)
		return (NULL);

	j = (size_t)sqrt((double)size);
	index = 0;
	l = 0;

	do {
		p = list;
		l++;
		index = l * j;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)p->index, (int)list->index);

	for (; p && p->index <= list->index; p = p->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)p->index, p->n);
		if (p->n == value)
			return (p);
	}

	return (NULL);
}
