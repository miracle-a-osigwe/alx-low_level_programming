#include <string.h>
#include "main.h"


/**
 * *_strncat - Function call
 * Description: Concatenate two strings until nth value
 *
 * @dest : First input string
 * @src : Second input string
 * @n : Number of values to concatenate
 *
 *Return : Concatented strings
 */


char *_strncat(char *dest, char *src, int n)
{
	char *result = strncat(dest, src, n);

	return (result);
}
