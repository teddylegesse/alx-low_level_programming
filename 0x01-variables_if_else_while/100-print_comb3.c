#include <stdio.h>
/**
 * main - prints the combination of 2digit, followed by a new line
 * Return: 0 always
 */
int main(void)
{
int co;
int st;
for (co = 48; co <= 57; co++)
{
for (st = 49; st <= 57; st++)
{
if (st > co)
{
putchar(co);
putchar(st);
if (co != 56 || st != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
