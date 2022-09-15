#include <stdio.h>
#include "main.h"
int _isupper(int c);
/**
 * _isupper - prototype function that checks for uppercase character.
 * @c: contains character to be compared
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
