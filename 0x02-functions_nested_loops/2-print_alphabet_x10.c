#include "main.h"
/**
 * print_alphabet - prints the lowercase letters x10 in the alphabet
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
char j;
int y;
for (y = 0; y < 10; y++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
