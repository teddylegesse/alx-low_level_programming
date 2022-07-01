#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * based on the if steatment
 * Return: o always
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 0)
{
printf("%d and is greater than 5", n);
}
if (n == 0)
{
printf("%d and is 0", n);
}
if (n < 0 && n != 0)
{
printf("%d and is less than 6 and not 0\n", n);
}
return (0);
}
