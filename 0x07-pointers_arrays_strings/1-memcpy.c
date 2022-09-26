#include "main.h"

/**
 * *_memcpy - copies n bytes  from memory
 * @dest: points to the memory
 * @src: memory area to dest
 * @n: bytes in memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n) /*Using a while loop*/
	{
		*(dest + i) = *(src + i);
		i++
	}
	return (dest);
}
