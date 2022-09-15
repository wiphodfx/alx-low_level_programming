#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit(0 through 9)
 * @c: contains digit to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	{
		result = c;
	}
	return (result);
}
