#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: is argument
 * @src: is argument
 * Return: 0 always
 */
char *_strcpy(char *dest, char *src)
{
size_t i;
size_t n;
for (i = 0; i < n; &&src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
