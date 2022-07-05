#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: is passed argument to the function
 * Return: the last digit
 */
int print_last_digit(int n)
{
int r;
if (n < 0)
n = -n;
r = n % 10;
_putchar(r + 0);
return (r);
}
