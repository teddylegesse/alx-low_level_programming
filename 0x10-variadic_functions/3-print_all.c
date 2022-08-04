i#include "variadic_functions.h"
/**
 *
 */
void print_char(va_list arg)
{
char ab;
ab = va_arg(arg, int);
printf("%c", ab);
}
/**
 *
 */
void print_int(va_list arg)
{
int integer;
integer = va_arg(arg, int);
printf("%d", integer);
}
/**
 *
 */
void print_float(va_list arg)
{
float fnum;
fnum = va_arg(arg, double);
printf("%f", fnum);
}
/**
 *
 */
void print_string(va_list arg)
{
char *ptr;
ptr = va_arg(arg, char *);
if (ptr == NULL)
{
printf("(nil)");
return;
}
printf("%s", ptr);
}
/**
 *
 */
void print_all(const char * const format, ...)
{
}
