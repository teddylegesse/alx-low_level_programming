#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - return the sum of two integer
 * @a: is first integer
 * @b: is second integer
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - return the the differance between two integers
 * @a: first integer
 * @b: second integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return multiplication of two integer
 * @a: first integer
 * @b: second integer
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - return the division of two integers
 * @a: first integer
 * @b: second integer
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
 * op_mod - return mod of two integers
 * @a: first integer
 * @b: second integer
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
`}
