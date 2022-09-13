#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function prints the alphabet in lowercase
 * followed by a new line
 * Return: always void (success)
 */
void print_alphabet(void) /* print_alphabet- prototype function with parameter void*/
{
	char ck;

	for (ck = 'a'; ck <= 'z'; ck++)
	{
		putchar(ck);
	}
	putchar('\n');
}
