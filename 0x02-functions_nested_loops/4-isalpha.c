#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - see description below
 * @c: is an input parameter
 * Description: checks if the letter is upper or lowercase
 * Return: gives 1 if letter is uppercase or lowercase otherwise gives out 0
 **/

int _isalpha(int c)
{
if (islower(c) == 512 || isupper(c) == 256)
{
return (1);
}
else
{
return (0);
}
}
