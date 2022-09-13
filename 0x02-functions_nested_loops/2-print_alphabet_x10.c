#include <stdio.h>
#include "main.h"
void print_alphabet_x10(void);
/**
 * main - prints 10x the alphabets
 * in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void) /* print_alphabet_x10 prototype function*/
{
	char ck;
	int i = 0;

	while (i < 10)
	{
		ck = 'a';
		while (ck <= 'z')
		{
			_putchar(ck);
			ck++;
		}
		_putchar('\n');
		i++;
	}
}
