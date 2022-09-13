#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
	char ck;

	for (ck = 'a'; ck > 'z'; ck++)
	{
		putchar(ck);
	}
	putchar('\n');
}
/**
 * main - calls a function that prints the alphabet in lowercase
 * followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return(0);
}
