#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
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
printf("Last digit of %d is", n);
if (n > 0)
{
printf("and is greater than 5");
}
if (n == 0)
{
printf("and is 0");
}
if (n < 0 && n != 0)
{
printf("and is less than 6 and not 0");
}
printf("\n");
return (0);
}
