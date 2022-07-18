#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s:  the string parameter
 * @c: the charactor looking for 
 * Return: return a pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
