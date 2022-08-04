#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: numbers of argument passed to the function
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ab;
unsigned int i, sum = 0;
va_start(ab, n);
if (n != 0)
{
for (i = 0; i < n; i++)
sum += va_arg(ab, int);
va_end(ab);
return (sum);
}
return (0);
}
