#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 * @size: size of the memory to print
 * @c: the pointer address
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *)malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*(buffer + i) = c;
			i++;
		}
		return (buffer);
	}
}
