#include "function_pointers.h"
/**
 * array_iterator -  function that executes a function given as
 * a parameter on each element of an array
 * @array: strigs of array
 * @size: size of array
 * @action: finction  pointer to be excuted
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;
while (size-- > 0)
{
action(*array);
array++;
}
}
