#include <stdio.h>
#include "funtion_pointers.h"

/**
 * int_index - prints the index of the array
 * @array: array whose index is to be printed
 * @size: size of the array
 * @cmp: pointer oto the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, of -1 if no match is found
 * of size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
