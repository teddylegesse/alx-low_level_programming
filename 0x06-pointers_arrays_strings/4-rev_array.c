#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: is parameter 1
 * @n: is argument 2
 * Return: result
 */
void reverse_array(int *a, int n)
{
int x, y;
for (x = 0; x < (n / 2); x++)
{
y = a[x];
a[x] = a[n - x - 1];
a[n - x - 1] = y;
}
}
