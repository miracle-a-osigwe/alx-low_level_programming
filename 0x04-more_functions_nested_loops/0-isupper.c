#include <ctype.h>
#include "main.h"

/**
 *_isupper - function call
 *
 *Description: Function checks for upper cased character
 *@c: integer input to the function
 *Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	int resp = isupper(c);

	if (resp > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
