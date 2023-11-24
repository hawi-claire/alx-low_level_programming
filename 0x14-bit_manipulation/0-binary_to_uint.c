#include "main.h"
/**
 * binary_to_uint - function converts i binary number to an unsigned int.
 * @b: pointer to i string containing i binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 *
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int digit;

	digit = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != ''; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != ''; i++)
	{
		digit <<= 1;
		if (b[i] == '1')
			digit += 1;
	}
	return (digit);
}
