#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 *print_all - Function call
 *Description: a function that prints strings.
 *@format: string input to the function
 */

void print_all(const char * const format, ...)
{
	va_list nlist;
	int x = 0, y = strlen(format) - 1, b, a, toggle;
	float c;
	char * d;

	va_start(nlist, format);

	while (x <= y)
	{
		char i = format[x];

		switch ( i )
		{
		case 'c':
			a = va_arg(nlist, int);
			printf("%c", a);
			toggle = 1;
			break;
		case 'i':
			b = va_arg(nlist, int);
			printf("%d", b);
			toggle = 1;
			break;
		case 'f':
			c = va_arg(nlist, double);
			printf("%.2f", c);
			toggle = 1;
			break;
		case 's':
			d = va_arg(nlist, char *);
			if (d == NULL)
			{
				printf("(nil)");
			}
			if (d != NULL)
			{
				printf("%s", d);
			}
			toggle = 1;
			break;
		default:
			toggle = 0;
			break;
		}
		while (x < y && toggle == 1)
		{
			printf(", ");
			break;
		}
		x++;
	}
	printf("\n");
}
