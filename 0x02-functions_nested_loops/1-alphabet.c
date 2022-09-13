#include <stdio.h>
#include "main.h"
/**
 * print alphabet function prints the alphabet in lowercase
 * followed by a new line
 * Return: always void (success)
 */
void print_alphabet() /* prints alphabets in lowercase*/
{
	char ck;

	for (ck = 'a'; ck <= 'z'; ck++)
	{
		putchar(ck);
	}
	putchar('\n');
}
