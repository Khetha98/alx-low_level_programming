#include <stdio.h>
#include "main.h"

/**
 * print_sign - see description
 * @n: is an input parameter
 * Description: checks if a number is zero, positive or negative
 * Return: gives 0 if number is zero, 1 if is positive
 * or -1 if negative
 **/

int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('+');
return (1);
}

}
