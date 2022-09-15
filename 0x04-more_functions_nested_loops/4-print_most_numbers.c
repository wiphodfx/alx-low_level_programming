#include <stdio.h>
#include "main.c"
void print_most_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 */
void print_most_numbers(void)
{
	int c = 0;
	int j;

	while (c <= 9)
	{
		j = _putchar(c);
		if (j == 2 || j == 4)
		{
			c++;
		}
		else
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
