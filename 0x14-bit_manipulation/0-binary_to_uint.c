#include "main.h"

/**
 * binary_to_uint - Function call
 * @b: input pointing to a string of 0 and 1 chars
 * Description: A function that converts a binary to an unsigned int
 * Return: the converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len = strlen(b) - 1, i = 0, power, rem, number;

	while (i <= len)
	{
		int c = b[i];

		if (c != 48 && c != 49)
		{
			return (0);
		}
		i++;
	}
	number = atoi(b), i = 0;

	while (number != 0)
	{
		rem = number % 10;
		number /= 10;
		power = (int) (epow(1, i) + 1e-9);
		decimal += rem * power;
		++i;
	}
	return (decimal);
}


/**
 * epow - Custom function
 * @x: input
 * @y: input
 * Description: A function to calculate the exponent of x to y
 * Return: Double datatype for the exponent
 */

int epow(int x, int y)
{
	int result;

	result = x<<y;
	return (result);
}
