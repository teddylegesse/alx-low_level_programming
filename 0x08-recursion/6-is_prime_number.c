#include "main.h"
/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: 1 in seccess else -1 in error
 */
int prime2(int a, int b)
{
if (a == b)
return (1);
else if (a % b == 0)
return (0);
return (prime2(a, b + 1));
}
/**
 * is_prime_number -  returns 1 if the input is a prime number, else return 0.
 * @n: integer parameter
 * Return: 1 in seccess else -1 in error
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime2(n, 2));
}
