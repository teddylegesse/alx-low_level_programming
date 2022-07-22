#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: is argument 1
 * @src: is argument 2
 * Return: o always
 */
char *_strcat(char *dest, char *src)
{
int length, i;
length = 0;
while (dest[length])
length++;
for (i = 0; src[i] != 0; i++)
{
dest[length] = src[i];
length += 1;
}
dest[length] = '\0';
return (dest);
}
