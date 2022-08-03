#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the sum of two integer
 * @a: first integer
 * @b: second integer
 * Return:  Returns the sum of two integer
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Returns the the differance between two integers
 * @a: first integer
 * @b: second integer
 * Return: Returns the the differance between two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns multiplication of two integer
 * @a: first integer
 * @b: second integer
 * Return: Returns multiplication of two integer
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Returns the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: Returns the division of two integers
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
 * op_mod - Returns mod of two integers
 * @a: first integer
 * @b: second integer
 * Return: Returns mod of two integers
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
