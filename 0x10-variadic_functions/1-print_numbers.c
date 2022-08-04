#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: numbers of argument passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ab;
unsigned int i;
for (i = 0; i < n; i++)
{
printf("%d",va_arg(ab, int));
if (i != n-1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ab);
}
