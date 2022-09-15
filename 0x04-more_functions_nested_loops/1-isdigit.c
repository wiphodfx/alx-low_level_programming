#include <stdio.h>
#include "main.h"
int _isdigit(int c);
/**
 * _isdigit - prototype function that checks for a digit(0 through 9)
 * @c: contains digit to be checked
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 * Returns: 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		retrun (1);
	}
	else
	{
		return (0);
	}
}
