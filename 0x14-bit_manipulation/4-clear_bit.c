#include "main.h"
/**
 * clear_bit - Function call
 * Description: sets the value of a bit to 0 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: return 1 if successful, else -1.
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
	{
		return (-1);
	}

	m = 1 << index;

	if (*n & m)
	{
		*n ^= m;
	}

	return (1);
}
