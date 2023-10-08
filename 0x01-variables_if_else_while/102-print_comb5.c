#include <stdio.h>
/**
 * main - print combinations of pair of two digit numbers without repetition.
 *
 * Return: Always 0 success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < 5 && i != j)
			{
				putchar((1 / 10) + '0');
				putchar((1 % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (1 != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
