#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in asc order
 * @list: list to be sorted
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *fow = *list;
	listint_t *prn = *list;
	listint_t *bac, *temp, *tp, *beh, *fro, *hold;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (fow->next)
	{
		hold = fow;
		temp = fow->next;
		bac = fow;
		if (temp->n && temp->n < bac->n)
		{
			while (temp->n < bac->n)
			{
				fro = temp->next;
				beh = temp->prev;
				beh->next = fro;
				if (temp->next != NULL)
					fro->prev = beh;
				if (bac->prev == NULL)
				{
					temp->next = bac;
					bac->prev = temp;
					temp->prev = NULL;
					*list = temp;
					prn = *list;
				}
				else
				{
					tp = beh->prev;
					tp->next = temp;
					beh->prev = temp;
					temp->prev = tp;
					temp->next = beh;
					bac = bac->prev;
				}
				print_list(prn);
				bac = bac->prev;

			}
			fow = hold;
		}
		else
		{
			fow = fow->next;
		}
	}
}
