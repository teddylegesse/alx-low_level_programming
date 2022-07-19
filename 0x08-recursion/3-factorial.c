#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: is parameter
 * Return:  success 1.else error -1;
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
