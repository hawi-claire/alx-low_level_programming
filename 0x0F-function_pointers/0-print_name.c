#include "function_pointers.h"
#include "stdio.h"
/*
 * print_name - prints name using the pointer to function
 *
 * @name - char string pointer
 *
 * @f - the pointer to function
 *
 * return:none
 *
 */
void print_name(char *name, void (*f)(char *));

{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
