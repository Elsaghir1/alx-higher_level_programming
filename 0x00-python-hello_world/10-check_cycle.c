#include "lists.h"

/**
 * check_cycle - checks if list is cyclical
 * @list: pointer to list to check
 * Return: 1 if cyclical, 0 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *l = list, *r = list;

	while (r && r->next)
	{
		l = l->next;
		r = r->next->next;
		if (l == r)
			return (1);
	}
	return (0);
}
