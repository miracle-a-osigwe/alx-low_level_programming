#include "main.h"

/**
 * binary_to_uint - Function call
 * @b: input pointing to a string of 0 and 1 chars
 * Description: A function that converts a binary to an unsigned int
 * Return: the converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int x;
	int len, i = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b) - 1, b2 = 0;

	while (len >= 0)
	{
		char c = b[len];

		if (c != '0' && c != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			b2 *= 2;
			x += b2;
		}
		len--;
		i++;
	}
	return (x);
}
