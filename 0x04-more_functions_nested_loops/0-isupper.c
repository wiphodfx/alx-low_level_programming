#include <stdio.h>
#include "main.h"
int _isupper(int c);
/**
 * _isupper - function that checks for uppercase character
 * @c: contains value to be compared
 * Return: 1 is uppercase
 * Retrun: 0 otherwise
 * Return: Always 0 (success)
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
