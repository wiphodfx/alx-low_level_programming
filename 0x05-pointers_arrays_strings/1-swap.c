#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: stores an integer value to be swapped
 * @b: stores an integer value to be swapped.
 * Return Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
