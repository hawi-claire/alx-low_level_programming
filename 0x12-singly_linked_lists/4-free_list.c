#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
/*Store the next node pointer before freeing the current node*/
temp = head->next;
/*Free the string associated with the current node*/
free(head->str);
/*Free the current node itself*/
free(head);
/*Move to the next node*/
head = temp;
}
}
