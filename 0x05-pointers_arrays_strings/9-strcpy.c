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
int len = 0, i;
while (src[len])
	len++;
for (i = 0; i < len - 1; i++)
{
dest[i] = src[i];
}
return (dest);
}
