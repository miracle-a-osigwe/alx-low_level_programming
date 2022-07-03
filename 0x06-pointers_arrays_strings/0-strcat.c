#include <string.h>
#include "main.h"


/**
 * _strcat - Function call
 *Description: Concatenate two strings
 *
 * @dest : First input string
 * @src : Second input string
 *
 * Return : @result Concatented strings
 */


char *_strcat(char *dest, char *src)
{
	char *result = strcat(dest, src);

	return (result);
}
