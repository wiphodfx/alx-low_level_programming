#include <stdio.h>

void __attribute__((constructor)) here(void);
/**
 * here - prints a string before the main
 * function is executed
 */
void here(void)
{
	printf("You're beat! and yet, you must allow,"
		"\nI bore my house upon my back!\n");
}
