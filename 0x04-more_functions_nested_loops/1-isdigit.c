#include <ctype.h>
#include "main.h"

/**
 *_isdigit - function call
 *
 *Description: Function checks for digit value
 *@c: integer input to the function
 *Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	int resp = isdigit(c);

	if (resp > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
