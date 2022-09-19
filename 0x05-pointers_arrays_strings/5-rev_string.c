#include "main.h"

/**
 * rev_string - reverses a string
 * @s: stores the string to be reversed
 * Retun: void
 */
void rev_string(char *s)
{
	char *first_character, *last_character, c;
	int i, timer;
	int length = 0;

	for (i = 0; s[i]; i++)
	{
		length++;
	}

	timer = length;

	first_character = s;
	last_character = s;

	for (i = 0; i < timer - 1; i++)
	{
		last_character++;
	}

	for (i = 0; i < timer / 2; i++)
	{
		c = *last_character;
		*last_character = *first_character;
		*first_character = c;

		first_character++;
		last_character--;
	}
}
