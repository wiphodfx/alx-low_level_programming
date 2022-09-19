#include <unistd.h>

/**
 * _putchar - writes the character a to stdout
 * @a: The character to print
 *
 * Return: On success 1.
 * On erro, -1 is returned and error is then returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
