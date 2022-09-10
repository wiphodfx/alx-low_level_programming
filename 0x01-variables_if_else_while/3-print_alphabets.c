#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lowercase and then in uppercase
 * followed by a newline
 * Return: always 0 (success)
 */
int main(void)
{
	char cz = 'a';
	char cx = 'A';

	for(cz = 'a'; cz <= 'z'; cz++)
		putchar(cz);

		for (cx = 'A'; cx <= 'Z'; cx++)
			putchar(cx);
	putchar('\n');
	return (0);
}
