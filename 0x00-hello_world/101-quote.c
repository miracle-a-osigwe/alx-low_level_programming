#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Print a string without using PUTS and PRINTF
 *
 *Return: 1 when completed else error
 */

int main(void)
{
	const char report[59] = "and that piece of art is useful\" - Dora Korpar, 20\
15-10-19\n";

	syscall(SYS_write, 2, report, sizeof(report));

	return (1);
}
