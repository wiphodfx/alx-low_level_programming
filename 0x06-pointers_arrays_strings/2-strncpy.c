#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: a pointer to a chareacter tha will be changed
 * @src: a pointer to a character that will be changed
 * @n: value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
