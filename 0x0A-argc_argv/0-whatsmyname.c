#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * followed by a newline
 * @argc: counts the number of inputs
 * @argv: value of the input
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("Argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
