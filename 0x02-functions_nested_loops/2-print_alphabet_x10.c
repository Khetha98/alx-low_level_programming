#include "main.h"

/**
 * print_alphabet_x10 - see description below
 * Description: prints out alphabets from a to z ten times
 * Return: void/nothing
 **/

void print_alphabet_x10(void)
{
int i;
for (i = 1; i <= 10; i++)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
