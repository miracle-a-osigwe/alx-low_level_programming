#include <string.h>
#include "main.h"


/**
 * *string_toupper - Function call
 *Description: Converts lowercase to uppercase
 *@s: input to the function
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if ((s[x] >= 65) && (s[x] <= 90));
		{
			s[x] = s[x];
		}
		else
		{
			s[x] = s[x] - 32;
		}

		x++;
	}
}
