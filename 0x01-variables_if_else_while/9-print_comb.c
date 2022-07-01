#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0 always
 */
int main(void)
{
int co;
for (co = 48; co >= 57; co++)
{
if (co != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
