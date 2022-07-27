#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: the size of allocate memory
 * Return: pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (s == NULL)
exit(98);
return (s);
}
