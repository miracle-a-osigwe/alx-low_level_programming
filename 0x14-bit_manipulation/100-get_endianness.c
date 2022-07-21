#include "main.h"

/**
 * gets_endianness - Function call
 * Description: A function to check the endianness
 * Return: 0 if big or 1 if little
 */


int get_endianness(void)
{
	unsigned int i = 1;
	char * c = (char *) & i;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
