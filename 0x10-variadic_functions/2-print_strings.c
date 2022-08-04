#include "variadic_functions.h"
/**
 * print_strings - unction that prints strings, followed by a new line.
 * @n: numbers of argument passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ab;
unsigned int i;
char *ptr;
va_start(ab, n);
for (i = 0; i < n; i++)
{
ptr =  va_arg(ab, char *);
if (ptr == NULL)
printf("(nil)");
else
printf("%s", ptr);
if (i != n-1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ab);
}

