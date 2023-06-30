#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: string to be reversed
 *
 * Return: zero when success
 */
void print_rev(char *s)
{
	int a, b, c;
	char x;

	for (a = 0; s[a] != '\0'; a++)
		;
	c = a;
	b = 0;
	for (c = c - 1; b < (c / 2); c--, b++)
	{
		x = s[b];

		s[b] = s[a];
		s[a] = x;
	}
}
