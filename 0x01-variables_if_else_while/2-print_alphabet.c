#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphabets loercase'
 *Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 127)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
