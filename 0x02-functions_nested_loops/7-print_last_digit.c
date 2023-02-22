
#include "main.h"

/**
 * print_last_digit - Check the description below
 * @n: Is an input parameter
 * Description: Prints out the last digit of a number
 * Return: gives out last digit of number n
 */
int print_last_digit(int n)
{
int k;
if (n < 0)
{
k = -1 * (n % 10);
}
else
{
k = n % 10;
}
_putchar((k % 10) + '0');
return (k % 10);
}
