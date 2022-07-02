#include "main.h"
#include <string.h>

/**
 *rev_string - Function call
 *Description: Reverse a string.
 *@s: string input
 *
 */

void rev_string(char *s)
{
	int len = strlen(s);

	int x = 0, temp;

	while (x < len / 2)
	{
		temp = s[x];
		s[x] = s[len - x- 1];
		s[len - x- 1] = temp;
		x++;
	}
}
