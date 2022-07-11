#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: argument
 * @n: is parameter
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i, y;
y = n;
for (i = 0; i < y; i++)
{
printf("%d", *(a + i));
if (i != y - 1)
printf(", ");
}
_putchar('\n');
}
