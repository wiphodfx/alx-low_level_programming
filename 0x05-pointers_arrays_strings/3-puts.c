#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * to stdout.
 * @str: holds the string
 * Return: nothing
 */
void _puts(char *str)
{
	char *a;
	int i;

	a = str;

	i = 0;
	while (a[i])
	{
		_putchar (a[i]);
		i++;
	}
	_putchar('\n');
}
