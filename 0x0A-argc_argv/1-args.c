#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: counts the number of input
 * @argv: holds the value entered
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

		for (i = 0;  i < argc; i++)
		{
			argc = argc + atoi(argv[i]);
		}
		printf("%d\n", argc);
		return (0);
}
