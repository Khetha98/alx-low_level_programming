#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%s",n +" is positive");
	}
	else if (n == 0)
	{
	printf("%s", n+" is zero");
	}
	else
	{
	printf("%s", n+" is negative");
	}
	return (0);
}
