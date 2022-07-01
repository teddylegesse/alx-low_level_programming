#include <stdio.h>
/**
 * main - prints the combination of 3digit, followed by a new line
 * Return: 0 always
 */
int main(void)
{
int co;
int st;
int th;
for (co = 48; co <= 57; co++)
{
for (st = 49; st <= 57; st++)
{
for (th = 50; th <= 57; th++)
{
if (st > co && th > st)
{
putchar(co);
putchar(st);
putchar(th);
if (co != 56 || st != 56)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar(10);
return (0);
}
