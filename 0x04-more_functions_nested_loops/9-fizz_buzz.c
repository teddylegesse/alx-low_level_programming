#include "main.h"
/**
 *  fizz_buzz - prints the numbers from 1 to 100
 *  Return: 0 always
 */
void fizz_buzz(void)
{
int x;
for (x = 1; x < 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
printf("Fizz");
else if (x % 3 == 0)
printf("Buzz");
else if (x % 5 == 0)
	printf("FIzzBuzz");
else
printf("%d", x);
}
}
