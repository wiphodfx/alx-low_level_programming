#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two integers
 * followed by a newline
 * @argc: counts the input
 * @argv: holds the value to multiply
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int firstNumber;
	int secondNumber;

	if (argc == 3)
	{
		firstNumber = atoi(argv[1]);
		secondNumber = atoi(argv[2]);
		printf("%d\n", firstNumber * secondNumber);
		return (0);
	}
	printf("Error\n");
	return (1);
}
