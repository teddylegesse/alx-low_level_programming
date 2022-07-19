#include "main.h"
/**
 * sqrt2 - function that returns the natural square root of a number.
 * @a: is parameter 1
 * @b: is parameter 2
 * Return: seccess on 1. error on -1
 */
int sqrt2(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: is parameter
 * Return: 1 in seccess else -1 in error
 */
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
