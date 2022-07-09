#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: is an argument
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int y, i;
if (n <= 0)
_putchar('\n');
else
{
for (y = 0; y < n; y++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
