#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 *
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *newnode;
listint_t *list = *head;

newnode = malloc(sizeof(listint_t));
if (!newnode || !head)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}

for (k = 0; list && k < idx; k++)
{
if (k == idx - 1)
{
newnode->next = list->next;
list->next = newnode;
return (newnode);
}
else
list = list->next;
}

return (NULL);
}

