#include <stdio.h>
#include <stdlib.h>
/**
 * A program that prints
 * alphabets in lowercase
 * using the putchar fucnction 
 * and Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c+1;
	}
	exit (EXIT_SUCCESS);
}
