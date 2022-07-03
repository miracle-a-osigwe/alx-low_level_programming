#include "main.h"
#include <string.h>

/**
 *reverse_array - Function call
 *Description: reverse an array of integers.
 *@a: string input
 *@n: size of array
 *
 */

void reverse_array(int *a, int n)
{
	int x = 0, temp;

	while (x < n / 2)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
		x++;
	}
}
