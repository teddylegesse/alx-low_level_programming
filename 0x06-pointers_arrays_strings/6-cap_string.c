#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - function that capitalizes all words of a string.
 *  @s: is parameter
 * Return: string
 */
char *cap_string(char *s)
{
char spl[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int length = 13;
int a = 0, i;
while (s[a])
{
i = 0;
while (i < length)
{
if ((a == 0 || s[a - 1] == spl[i]) && (s[a] >= 97 && s[a] <= 122))
	s[a] = s[a] - 32;
i++;
}
a++;
}
return (s);
}

