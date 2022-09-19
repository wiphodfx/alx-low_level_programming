#include "main.h"

/**
 * print_array - prints n elements of an array of intgers
 * followed by a new line
 * @n: is the number of elements of the array to be printed
 * @a: pointer to an int that will be changed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
