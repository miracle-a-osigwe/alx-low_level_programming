#include "main.h"
#include <ctype.h>

/**
 * *cap_string - Function call
 *Description: Capitalize the words in a strings
 *@s: input to the function
 * Return: capitalized strings
 */

char *cap_string(char *s)
{
	int x = 0, res, c, p, b;
	char a;

	while (s[x] != '\0')
	{
		res = isdigit(s[x - 1]), p = ispunct(s[x - 1]);
		b = isblank(s[x - 1]), a = s[x - 1], c = s[x];

		if ((c >= 97 && c <= 122 && (p != 0 || b != 0 || a == '\n'))
		    || x == 0)
		{
			if (res != 0 || s[x - 1] == '-')
			{
				s[x] = s[x];
			}
			else
			{
				s[x] = s[x] - 32;
			}
		}
		else
		{
			s[x] = s[x];
		}
		x++;
	}
	return (s);
}
