#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a newline
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char ck;

	for (i = 28; i < 38; i++)
	{
		putchar(i);
	}
	for (ck = 'a'; ck <= 'f'; ck++)
	{
		putchar(ck);
	}

	putchar('\n');
	return (0);
}
