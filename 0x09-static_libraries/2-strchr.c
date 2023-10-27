#include "main.h"

/**
 *  * _strchr - Entry point
 *   * @s: input
 *    * @c: input
 *     * Return: Always 0 (Success)
 *      */
char *_strchr(char *s, char c)
{
		/* Declaration of variable 'i' */
		int i = 0;

			/* Iterate through the string 's' */
			for (; s[i] >= '\0'; i++)
					{
								/* Check if the character at 'i' is equal to 'c' */
								if (s[i] == c)
												return (&s[i]);
									}
				/* Return 0 if character 'c' is not found in string 's' */
				return (0);
}

