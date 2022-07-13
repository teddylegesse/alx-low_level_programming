#include "main.h"
#include <stdio.hi>
#include <string.h>
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: is parameter 1
 * @n: is argument 2
 * Return: result
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; i >= 0; i--)
{
if (i != n - 1)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
