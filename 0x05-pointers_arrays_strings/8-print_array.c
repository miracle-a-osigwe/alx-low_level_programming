#include <stdio.h>
#include "main.h"


/**
 *print_array - Function call
 *
 *Description: Prints nth number of a given array
 *@a : Given array input
 *@n : Number of array
 *
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		if (a[x + 1] == '\0')
		{
			printf("%d\n", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
		x++;
	}
}
