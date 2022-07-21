#include "main.h"

/**
 * get_endianness - Function call
 * Description: A function to check the endianness
 * Return: 0 if big or 1 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;

	return ((int)*c);
}
