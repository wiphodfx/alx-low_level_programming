#include "variadic_function.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: number to be separated
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valit);

}
