#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * @a: argument
 * @n: is parameter
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++;)
{
printf("%d,\n", *(a + i));
}
}
