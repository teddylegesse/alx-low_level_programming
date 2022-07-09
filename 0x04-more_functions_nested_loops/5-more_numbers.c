#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
int x;
for (i = 0; i < 10; i++)
{
for (x = 0; x < 15; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}
}
