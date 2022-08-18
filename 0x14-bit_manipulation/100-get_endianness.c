#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if (*c == 1)
		return (1);

	return (0);
}
