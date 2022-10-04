#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - create an array of chars
 * and initiailizes it with specific char
 * @size: stores the count
 * @c: character to be initialized
 * Return: Null or a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *buffer;

	i = 0;
	while (i < size)
	{
		buffer = (char *)malloc(size * sizeof(c));
		if (size == 0)
		{
			return (NULL);
		}
		i++;
	}
	return (buffer);
}
