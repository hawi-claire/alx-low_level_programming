#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t nil = 0;
int brief;
listint_t *list;

if (!h || !*h)
return (0);

while (*h)
{
brief = *h - (*h)->next;
if (brief > 0)
{
list = (*h)->next;
free(*h);
*h = list;
nil++;
}
else
{
free(*h);
*h = NULL;
nil++;
break;
}
}

*h = NULL;

return (nil);
}
