#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @x: is parameter
 * Return: string
 */
char *leet(char *x)
{
int a = 0;
int b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'};
char trw[5] = {'4', '3', '0', '7', '1'};
while (x[a])
{
b = 0;
while (b < l)
{
if (x[a] == tr[b] || x[a] - 32 == tr[b])
x[a] = trw[b];
b++;
}
a++;
}
return (x);
}
