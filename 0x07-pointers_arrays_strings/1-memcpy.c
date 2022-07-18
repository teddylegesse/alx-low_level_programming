#include "main.h"
/**
 * _memcpy -  function that copies memory area.
 * @dest: where to copy memory to
 * @src: memory area to copy
 * @n: the numbers of byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

