#include "lists.h"

void __attribute__((constructor)) win_print(void);

/**
 * win_print - Function call
 * Description: Just to print a custom sentence
 */


void win_print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house ");
	printf("upon my back!\n");
}
