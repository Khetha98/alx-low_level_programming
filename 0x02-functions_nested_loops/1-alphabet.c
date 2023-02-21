#include "main.h"
/**
 * print_alphabet: Prints out alphabets
 * Description: It prints out alphabets from a to z
 * Return: void/returns nothing
 **/

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
