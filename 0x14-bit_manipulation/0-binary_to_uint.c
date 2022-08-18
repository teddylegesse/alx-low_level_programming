#include "main.h"
/**
 *  binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: binarry string
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b[i] == '\0')
		return (0);

	while ((b[i] == '0') || (b[i] == '1'))
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
