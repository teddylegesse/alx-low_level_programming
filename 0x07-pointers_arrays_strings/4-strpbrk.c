#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string parameter
 * @accept the byte to search for
 * Return: s that matches one of the bytes in
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
