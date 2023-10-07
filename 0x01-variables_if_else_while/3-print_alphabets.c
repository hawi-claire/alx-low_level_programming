#include <stdio.h>
/**
  *main = Entry point
  *Description: 'Print uppercase and lowercase of alphabet'
  *Return: always 0
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (n <= 98)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
