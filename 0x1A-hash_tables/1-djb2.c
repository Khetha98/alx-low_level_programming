/**
 * hash_djb2 - implementation of an djb2 algorithm
 * @str: string used to generate the hash value
 *
 * Return: returns hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int c;

	h = 5381;
	while ((c = *str++))
	{
		h = ((h << 5) + h) + c;
	}
	return (h);
}
