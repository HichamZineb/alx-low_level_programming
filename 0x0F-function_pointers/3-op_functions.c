#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum
 * @a: number
 * @b: number
 *
 * Return: sum
 */
int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - returs difference
 * @a: number
 * @b: number
 *
 * Return: difference
 */
int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - returns product
 * @a: number
 * @b: number
 *
 * Return: product
 */
int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - returns division result
 * @a: number
 * @b: number
 *
 * Return: division result
 */
int op_div(int a, int b)

{
	return (a / b);
}

/**
 * op_mod - returns remainder
 * @a: number
 * @b: number
 *
 * Return: remainder
 */
int op_mod(int a, int b)

{
	return (a % b);
}
