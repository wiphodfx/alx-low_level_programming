#include <stdio.h>
#include "main.h"
int _abs(int);
/**
 * _abs - computes the absolute values of integers
 * int - parameter to hold value
 * Return: Always 0 (success)
 */
int _abs(int i)
{
	int i;

	if (i <  0)
	{
		return (i * (-1));
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (i);
	}
}
