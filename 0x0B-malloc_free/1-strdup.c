#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup-duplicate to new memory space location
 * @str: char
 * Return:0
 */
char *_strdup(char *str)
{
	char *aaa;

	int l, k = 0;


	if (str == NULL)
		return (NULL);
	l = 0;

	while (str[l] != '\0')
		l++;

	aaa = malloc(sizeof(char) * (l + 1));


	if (aaa == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
		aaa[r] = str[r];
	return (aaa);
}
