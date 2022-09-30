#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: counts numbers
 * @argv: stores the input
 * Return: Always 1
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 1;

	if (argc > 2 && argc < 4)
	{
		while (i < argc)
		{
			sum = sum * atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	else if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
}
