#include "main.h"
int _isupper(int c);

/**
 * main - check the code.
 * _isupper - function that checks for uppercase character
 * @c: contains value to be compared
 * Returns: 1 if c is uppercase
 * Returns: 0 otherwise
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
