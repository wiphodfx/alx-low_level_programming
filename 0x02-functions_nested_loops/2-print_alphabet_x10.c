#include <stdio.h>
#include "main.h"
void print_alphabet_x10(void);
/**
 * main - prints 10x the alphabets
 * in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char ck = 'a';
	int i = 0;

	while (ck < 'z')
	{
		_putchar(ck);
		ck++;
		while (i < 10)
		{
			i++;
		}
	}
	_putchar('\n');
}
