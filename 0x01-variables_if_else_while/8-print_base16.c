#include <stdio.h>
/**
 *  main - prints the numbers  in base 16, followed by a new line
 *  Return: 0 always
 */
int main(void)
{
int ba;
char ch;
for (ba = 48; ba <= 57; ba++)
putchar(ba);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar(10);
return (0);
}
