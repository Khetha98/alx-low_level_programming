#include "main.h"

/**
   * more_numbers - is a function that prints 10 times the numbers, from 0 to 14,
   * followed by a new line.
   * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int j = 0;
	int i = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
