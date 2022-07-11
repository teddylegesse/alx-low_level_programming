#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character
 * @str: is parameter
 * Return: always 0;
 */
void puts2(char *str)
{
int length, i;
length = strlen(str);
for (i = 0; i < length; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

