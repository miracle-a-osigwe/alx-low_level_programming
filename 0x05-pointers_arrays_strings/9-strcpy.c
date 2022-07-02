#include <string.h>
#include "main.h"


/**
 * _strcpy - FUnction call
 *
 *Documentation: Copies a string to another string'
 *@dest : string to copy to
 *@src: Source to copy from
 *
 *Return: Return the pointer to the string
 */

char *_strcpy(char *dest, char *src)
{
	char *result = strcpy(dest, src);

	return (result);
}
