#include "main.h"



/**
 * get_endianness - checks if the machine is little or big endian
 * Return: returns 0 for big, returns 1 for little
 */


int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

