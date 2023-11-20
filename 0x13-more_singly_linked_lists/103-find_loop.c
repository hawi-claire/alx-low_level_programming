#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *green = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (green && fast && fast->next)
{
fast = fast->next->next;
green = green->next;
if (fast == green)
{
green = head;
while (green != fast)
{
green = green->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}
