#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* print_list - check the code for Holberton School students.
* @h: name of the list
* Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
/*Iterate through the linked list until the pointer reaches NULL*/
	{
		if (h->str == NULL)
/*Check if the current node's string pointer is NULL*/
		{
			printf("[0] (nil)\n");
/*Print "(nil)" if the string is NULL*/
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
/*Print the string's length and content*/
		}
		count++;
		h = h->next;
	}
	return (count);
/*Return the total number of nodes printed*/
}
