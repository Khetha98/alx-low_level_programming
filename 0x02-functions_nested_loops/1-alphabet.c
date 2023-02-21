#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
