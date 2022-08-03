#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of itself.
 * @argc:  count numbers of argument in the program
 * @argv: array of pointer in the argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
int i, x;
int (*address)(int, char **) = main;
unsigned char opcode;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
i = atoi(argv[1]);
if (i < 0)
{
printf("Error\n");
exit(2);
}
for (x = 0; x < i; x++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);
if (x == i - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
