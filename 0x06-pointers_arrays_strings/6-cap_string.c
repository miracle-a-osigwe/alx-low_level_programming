#include <string.h>
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
	int x = 0, res, up, p, b;

	while (s[x] != '\0')
	{
		if (x == 0)
		{
			up = isupper(s[x]);

			if (up != 0)
			{
				s[x] = s[x];
			}
			else
			{
				s[x] = s[x] - 32;
			}
		}

		res = isdigit(s[x - 1]);
		p = ispunct(s[x - 1]);
		b = isblank(s[x - 1]);

		if (s[x] >= 97 && s[x] <= 122 && (p != 0 || b != 0))
		{
			if (res != 0)
			{
				s[x] = s[x];
			}
			else if (s[x - 1] == '-')
			{
				s[x] = s[x];
			}
			else
			{
				s[x] = s[x] - 32;
			}
		}
		else if (s[x - 1] == '\n')
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
