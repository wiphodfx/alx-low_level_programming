#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: stores the string to be printed half
 * Return: void
 */
void puts_half(char *str)
{
	int i, end;

	i = 0;
	while (astr[i] != '\0')
	{
		i++;
	}

	end = ( i + 1) / 2;

	for (i = end; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

