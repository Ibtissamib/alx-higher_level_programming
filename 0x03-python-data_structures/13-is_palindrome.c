#include "lists.h"
/**
  *is_palindrome-checks
  *@head: listint_t **
  *Return: int
  */
int is_palindrome(listint_t **head)
{
	listint_t **actual = head;
	listint_t *r = reverse_listint(actual);

	while (*head)
	{
		if ((*head)->n != r->n)
		{
			return (0);
		}
		*head = (*head)->next;
		r = r->next;
	}
	return (1);
}
/**
  **reverse_listint-reverses
  *@head: listint_t **
  *Return:  listint_t *
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *newnode = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = newnode;
		newnode = *head;
		*head = node;
	}
	*head = newnode;
	return (*head);
}
