#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
char c = 'a';
char n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
