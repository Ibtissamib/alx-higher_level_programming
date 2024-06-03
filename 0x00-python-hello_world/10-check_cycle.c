#include "lists.h"
#include <stdio.h>
/**
 * check_cycle- prints a listint_t linked list.
 * @list: pointer to listint_t
 *
 * Return: number of nodes
 */
int check_cycle(listint_t *list)
{
	const listint_t *memory_addresses[1000];
	int i = 0, j = 0;

	if (list == NULL)
		return (0);
	while (list)
	{
		memory_addresses[i] = list;
		while (j < i)
		{
			if (memory_addresses[j] == list)
				return (1);
			j++;

		}
		j = 0;
		i++;
		list = list->next;

	}
	return (0);
}
