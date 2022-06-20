#include <ctype.h>
#include "main.h"

/**
 * _islower - Call _putchar
 * Description: Check if a character is lower or not
 * @c: Input to the function
 * Return: 1 if success else 0
 */

int _islower(int c)
{
	int resp = islower(c);

	if (resp > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
