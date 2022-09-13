#include <stdio.h>
#include "main.h"
int print_sign(int n);
/**
 * print_sign - prints the sign of a number
 * retuns 1 if n is greater than zero
 * retuns 0 if n is zero
 * @n: holds number to be compared
 *
 * Return: always 0 (success)
 */
int print_sign(int n)
{
	if (n % 10 > 0 )
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0')
		return (0);
	}
}
