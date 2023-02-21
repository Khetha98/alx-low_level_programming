#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - see description below
 * Description: checks if a letter is lowercase
 * Return: gives 1 if it letter is lowercase else 0
 **/

int _islower(int c)
{
if (islower(c) == 512)
{
return (1);
}
else
{
return (0);
}
}
