#include "main.h"
/**
 * _pow_recursion - functionreturns the value of x raised to the power of y
 * @x: is parameter
 * @y: is parameter 2
 * Return: 1 on seccess else -1 on error
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
