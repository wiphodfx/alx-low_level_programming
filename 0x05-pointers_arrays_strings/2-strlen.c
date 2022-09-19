#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: stores the string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0';)
	{
		x = x + 1;
	}
	return (x);
}
