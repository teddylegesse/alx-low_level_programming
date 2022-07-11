#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: is string parameter
 * Return: always 0.
 */
int _strlen(char *s)
{
int length;
for (; *s != '\0'; s++)
{
length += 1;
}
return (strlen(s));
}
