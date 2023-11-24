#include "main.h"
/**
 * get_endianness - this program checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *g;

	i = 1;
	g = (char *)&i;
	return (*g);
}
