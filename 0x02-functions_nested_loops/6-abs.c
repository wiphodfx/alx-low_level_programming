#include <stdio.h>
#include "main.h"
int _abs(int i);
/**
 * _abs - computes the absolute values of integers
 * @i - hold absolute value of int to print
 * Return: Always 0 (success)
 */
int _abs(int i)
{
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
