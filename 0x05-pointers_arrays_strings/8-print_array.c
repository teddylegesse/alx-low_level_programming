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
y = n - 1;
for (i = 0; i < y; i++)
{
printf("%d, ", *(a + i));
}
_putchar('\n');
}
