#include <stdio.h>
#include "main.h"
int _isupper(int c);
/**
 * _isupper - checks for uppercase character
 * @c: holds character
 * Return: 1 is uppercase
 * Retrun: 0 otherwise
 * Return: 0
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
