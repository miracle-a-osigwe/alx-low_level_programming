#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - Function call
 * @n: input integer to the function
 * Description: Prints any given number to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
