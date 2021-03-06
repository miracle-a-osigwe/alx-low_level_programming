#include <stdio.h>
#include <stdlib.h>


/**
 * main - Use SIZEOF to get the size of different datatypes
 *
 *Return: 0 when completed else error
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(unsigned long long));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
