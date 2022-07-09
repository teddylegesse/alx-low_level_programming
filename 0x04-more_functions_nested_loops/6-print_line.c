#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: is paramater
 * Return: 0 always
 */
void print_line(int n)
{
int y;
if (n <= 0)
_putchar('\n');
for (y = 0; y < n; y++)
_putchar(95);
_putchar('\n');
}
