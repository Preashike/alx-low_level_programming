#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head:head of the list 
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		head = temp;
		temp = head->next;
		free(head->str);
		free(head);
	}
}
