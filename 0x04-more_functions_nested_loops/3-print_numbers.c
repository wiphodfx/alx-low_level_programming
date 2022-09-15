#include <stdio.h>
#include "main.h"
void print_numbers(void);

/**
 * print_numbers - prints the numbers from 0 to 9
 * followed by a new line
 * @c: number stores the number from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
