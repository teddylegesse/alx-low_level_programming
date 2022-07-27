#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: pointer shall point to a newly allocated space in memory, 
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s = 0, j = 0, k = 0, l = 0;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s])
s++;
while (s2[k])
k++;
if (n >= k)
l = s + k;
else
l = s + n;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
k = 0;
while (j < l)
{
if (j <= s)
str[j] = s1[j];
if (j >= s)
{
str[j] = s2[k];
k++;
}
j++;
}
str[j] = '\0';
return (str);
}
