#include "main.h"
/**
 * cap_string(
 * @*: is parameter
 * Return: string
 */
char *cap_string(char *s)
{
char special_char[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int length = 13;
int a = 0, i;
while (s[a])
{
i = 0;
while (i < length)
{
if ((a == 0 || s[a - 1] == special_char[i]) && (s[a] >= 97 && s[a] <= 122))
i++;
}
a++;
}
return (s);
}

