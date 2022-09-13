#include <stdio.h>
#include "main.h"
int _islower(int c);
/**
 * _islower - function that checkes for lower character
 * returns 1 if c is lowercase;
 * returns 0 otherwise
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	char ck= 'c';

	if (islower(ck) == 'c')
	{
		return (1);
	}
	else{
		return (0);
	}
}
