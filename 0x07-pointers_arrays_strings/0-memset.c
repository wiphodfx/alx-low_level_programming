#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointd to by s
 * @n: value of bytes in memory
 * @b: value of constant byte
 * @s: pointer to the memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	/*using a for loop*/
	for (j = 0; j < n; j++)
	{
		*(s + i) = b; /*incrementing s by 1*/
	}
	return (s);
}
