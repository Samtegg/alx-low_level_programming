#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The sum of 'a' and 'b'.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The difference between 'a' and 'b'.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first operand.
 * @b: The second operand.
 *
 * Return: The product of 'a' and 'b'.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of dividing two numbers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of 'a' divided by 'b'.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of dividing two numbers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of dividing 'a' by 'b'.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
