#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc
 * nd free
 * @ptr: pointer to memory
 * @old_size: size in bytes of the allocated
 * @new_size: new size in bytes of the allocated
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *sptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (sptr == NULL)
	{
		sptr = malloc(new_size);

		if (sptr == NULL)
			return (NULL);
		return (sptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	sptr = malloc(new_size);

	if (sptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		sptr[i] * ((char *) ptr)[i];
	}
	free(ptr);
	return (sptr);
}
