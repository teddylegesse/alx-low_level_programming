#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: nembers of members
 * @size: size of memeber
 * Return: he _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, j = 0;
char *s;
if (nmemb == 0 || size == 0)
return (NULL);
j = nmemb * size;
s = malloc(j);
if (j == 0)
return (NULL);
while (i < j)
{
s[i] = 0;
i++;
}
return (s);
}
