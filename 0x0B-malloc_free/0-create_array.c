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

	i = 0;
	while (i < size)
	{
		if (size == 0 && size != '\0')
		{
			return (NULL);
		}
		buffer = (char *)malloc(size * sizeof(c));
		i++;
	}
	return (buffer);
}
