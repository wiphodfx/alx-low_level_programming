#include "3-calc.h"

/**
 * op_add - calcultes the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of integer of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: differnece of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integera
 * @a: first integer
 * @b: second integer
 *
 * Return: the multiplied integer of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the moduleus of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
