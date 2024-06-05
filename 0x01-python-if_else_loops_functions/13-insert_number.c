#include "lists.h"
/**
  *insert_node- inserts a number into a sorted singly linked list
  *@head: listint_t **
  *@number: int
  *Return: listint_t *
  */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *actual = malloc(sizeof(listint_t));
	listint_t *temp = NULL, *conc = NULL;

	if (actual == NULL)
		return (NULL);
	actual->n = number;

	if (*head == NULL)
	{
		actual->next = NULL;
		*head = actual;
	}
	else if ((*head)->n > number)
	{
		actual->next = *head;
		*head = actual;
	}
	conc = *head;
	while ((*head)->next)
	{
		if (((*head)->next)->n > number)
		{
			temp = (*head)->next;
			(*head)->next = actual;
			actual->next = temp;
			break;
		}
		*head = (*head)->next;
	}
	*head = conc;
	return (actual);
}
