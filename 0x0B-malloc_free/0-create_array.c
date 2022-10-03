#include <stdlib.h>
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

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
	return NULL;
}
