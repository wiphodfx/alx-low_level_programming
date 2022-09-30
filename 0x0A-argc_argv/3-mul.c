#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: counts numbers
 * @argv: stores the input
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			sum = sum * atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
}
