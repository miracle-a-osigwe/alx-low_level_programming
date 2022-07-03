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
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = s[x] - 32;
		}
		else
		{
			s[x] = s[x];
		}

		x++;
	}
	return (s);
}
