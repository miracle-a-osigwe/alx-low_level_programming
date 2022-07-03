#include <string.h>
#include "main.h"


/**
 * *_strncpy - Function call
 *Description: Copies two strings until nth value
 *
 *@dest: First input string
 *@src: Second input string
 *@n: Number of values to concatenate
 *
 *Return: Copy of the strings
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *result = strncpy(dest, src, n);

	return (result);
}
