#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0 always
 */
int main(void)
{
char ch;
for (ch = 97; ch <= 122; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
