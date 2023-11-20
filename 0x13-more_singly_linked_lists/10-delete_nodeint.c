#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 *
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *list = *head;
listint_t *certain = NULL;
unsigned int k = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(list);
return (1);
}

while (k < index - 1)
{
if (!list || !(list->next))
return (-1);
list = list->next;
k++;
}

certain = list->next;
list->next = certain->next;
free(certain);

return (1);
}
