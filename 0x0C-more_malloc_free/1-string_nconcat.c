#include "main.h"
#include <stdlib.h>
/**
 * string_nooncat - concatenate two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: no of element to concatenate from s2
 *
 * Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	size_t a, b, c;
	char *s;

	if (s1 == NULL)
		a = 0;
	else
	{

		for (a = 0; sa[a] != '\0'; a++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{

		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		s[c] = s1[c];
	for (c = 0; c < j; c++)
		s[c + a] = s2[c];
	s[a + c] = '\0';
	return (s);
}
