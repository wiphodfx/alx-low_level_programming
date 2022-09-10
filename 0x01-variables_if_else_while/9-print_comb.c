#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of a single-digit numbers
 * followed by a , and space
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
