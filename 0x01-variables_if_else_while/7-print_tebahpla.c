#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabets in reverse
 * followed by a newline
 * Return: Always 0 (success)
 */
int main(void)
{
	char ck;

	for (ck = 'z'; ck >= 'a'; ck--)
	{
		putchar(ck);
	}
	putchar('\n');
	return (0);
}
