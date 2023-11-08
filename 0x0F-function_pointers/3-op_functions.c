#include "3-calc.h"


	int op_add(int g, int h);
	int op_sub(int g, int h);
	int op_mul(int g, int h);
	int op_div(int g, int h);
	int op_mod(int g, int h);

	/*
	 * op_add - Returns the sum of two numbers.
	 * @g: The first number.
	 * @h: The second number.
	 *
	 * Return: The sum of g and h.
	 */
	int op_add(int g, int h)
	{
		return (g + h);
	}

	/*
	 * op_sub - Returns the difference of two numbers.
	 * @g: The first number.
	 * @h: The second number.
	 *
	 * Return: The difference of g and h.
	 */
	int op_sub(int g, int h)
	{
		return (g - h);
	}

	/*
	 * op_mul - Returns the product of two numbers.
	 * @g: The first number.
	 * @h: The second number.
	 *
	 * Return: The product of g and h.
	 */
	int op_mul(int g, int h)
	{
		return (g * h);
	}

	/*
	 * op_div - Returns the division of two numbers.
	 * @g: The first number.
	 * @h: The second number.
	 *
	 * Return: The quotient of g and h.
	 */
	int op_div(int g, int h)
	{
		return (g / h);
	}

	/*
	 * op_mod - Returns the remainder of the division of two numbers.
	 * @g: The first number.
	 * @h: The second number.
	 *
	 * Return: The remainder of the division of g by h.
	 */
	int op_mod(int g, int h)
	{
		return (g % h);
	}
