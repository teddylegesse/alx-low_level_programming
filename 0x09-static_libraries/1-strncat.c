#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: is argument 1
 * @src: is argument 2
 * @n: is argument 3
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
