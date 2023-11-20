#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *precedent = NULL;
listint_t *subsequent = NULL;

while (*head)
{
subsequent = (*head)->subsequent;
(*head)->subsequent = precedent;
precedent = *head;
*head = subsequent;
}

*head = precedent;

return (*head);
}
