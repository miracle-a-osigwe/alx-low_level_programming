#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 *print_strings - function call
 *Description: a function that prints strings.
 *@separator: string input to the function
 *@n: first number to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nlist;

	int i, x = 1, y = (int) n;

	va_start(nlist, n);

	while (x <= y)
	{
		i = va_arg(nlist, int);

		if (separator == NULL)
		{
			printf("%d", i);
		}
		else if (i == NULL)
		{
			printf("(nil)");
		}
		else if (x < y)
		{
			printf("%s%s", i, separator);
		}
		else
		{
			printf("%s", i);
		}
		x++;
	}
	printf("\n");
}
