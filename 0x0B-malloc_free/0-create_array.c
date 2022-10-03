#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - create an of chars
 * and initiailizes it with specific char
 * @size: stores the count
 * @c: character to be initialized
 * Return: Null or a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char buffer;

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
