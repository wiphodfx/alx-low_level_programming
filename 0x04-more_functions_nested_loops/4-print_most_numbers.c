#include <stdio.h>
#include "main.c"
void print_most_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			c++;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
