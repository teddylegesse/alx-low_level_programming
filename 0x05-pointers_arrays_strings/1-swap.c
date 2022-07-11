#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: is parameter
 * @b: is parameter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;
a = 98;
b = 42;
temp = *a;
*a = *b;
*b = temp;
}
