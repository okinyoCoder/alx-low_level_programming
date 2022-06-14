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
	int j;

	j = 0;
	while (s[j])
		j++;
	j--;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
