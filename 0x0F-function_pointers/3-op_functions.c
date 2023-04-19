#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of two numbers
 * @a: first argument
 * @b: second argument
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of two numbers
 * @a: first argument
 * @b: second argument
 *
 * Return: defference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the poduct of two numbers
 * @a: first argument
 * @b: second argument
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first argument
 * @b: seconf argument
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of two numbers
 * @a: fist argument
 * @b: second argument
 *
 * Return: remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
