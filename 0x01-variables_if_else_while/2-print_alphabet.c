#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lowercase
 * followed by a newline
 * using the putchar fucnction
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
