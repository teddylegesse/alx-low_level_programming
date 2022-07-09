#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, x;
for (i = 0; i < 10; i++)
{
for (x = 0; x < 15; x++)
{
if (x < 10)
{
_putchar(x + '0');
}
else
{
_putchar(x);
}
}
_putchar('\n');
}
}
