#include <stdio.h>
#include <stdlib.h>
/**
 * main assigns an alphabet to c
 * A program that print alphabets in lowercase
 * using the putchar fucnction
 * and Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c = c + 1;
	}
	return (0);
}
