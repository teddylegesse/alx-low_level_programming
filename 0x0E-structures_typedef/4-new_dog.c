#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog1;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
dog1 = malloc(sizeof(dog_t));
if (dog1 == NULL)
return (NULL);
dog1->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog1->name == NULL)
{
free(dog1);
return (NULL);
}
dog1->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog1->owner == NULL)
{
free(dog1->name);
free(dog1);
return (NULL);
}
dog1->name = _strcopy(dog1->name, name);
dog1->age = age;
dog1->owner = _strcopy(dog1->owner, owner);
return (dog1);
}
