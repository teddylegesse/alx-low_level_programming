#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - is the function check negative or positive
 * @main - check the function
 * @i: is argument
 * Return: 0
 */
void positive_or_negative(int i)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
int main(void)
{
int i;
i = 98;
positive_or_negative(i);
return (0);
}
