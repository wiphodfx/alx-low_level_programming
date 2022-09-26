#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: C is the string to scan
 * @accept: character in str1 that matches a character of str2
 * Return: s that matches any character
 */

char *_strpbrk(char *s, *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
