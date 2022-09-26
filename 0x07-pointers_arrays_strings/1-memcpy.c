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
	unsigned int j;

	j = 0;
	while (j < n)
	{
		*(dest + j) = *(src + j);
		j++
	}
	return (dest);
}
