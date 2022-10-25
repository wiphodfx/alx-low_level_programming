#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list
 * @head: Pointer to the address of the head of the listint
 * list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverselistint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	whiles ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
