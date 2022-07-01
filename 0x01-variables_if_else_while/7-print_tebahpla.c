#include <stdio.h>
/**
 * main - prints the alphabet in lowe reverse order, followed by a new line
 * Return: 0 always
 */
int main(void)
{
int st;
for (st = 122; st >= 97; st--)
putchar(st);
putchar(10);
return (0);
}
