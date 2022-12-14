#include <stdio.h>
#include "main.h"
int _isdigit(int c);
/**
 * _isdigit - checks for a digit(0 through 9)
 * @c: int digit to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
