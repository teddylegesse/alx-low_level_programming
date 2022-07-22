#include "main.h"
#include <stdlib.h>
/**
 *  _strstr - function that locates a substring.
 *  @haystack: longer string
 *  @needle:  substring to search
 *  Return:  substring if exist else return NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int s = 0;
while (needle[s] != '\0')
s++;
while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != s)
haystack++;
else
return (haystack);
}
return (NULL);
}

