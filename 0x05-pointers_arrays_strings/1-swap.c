#include "main.h"


/**
 *swap_int - Function call
 *Description: Swaps the value of the integer given
 *
 *@a: first integer
 *@b: second integer
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
