#include <stdio.h>
#include "main.h"
int print_last_digit(int i);
/**
 * print_last_digit - print last digit of a number
 * @i: stres the last digit to print
 * Return: Always 0 (success)
 */
int print_last_digit(int i)
{
	int lastDigit;

	if (i < 0)
	{
		lastDigit = (-1 * (i % 10));
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = (i % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
