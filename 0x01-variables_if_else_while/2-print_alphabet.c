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
		putchar(c, "\n");
		c = c++;
	}
	exit(EXIT_SUCCESS);
}
