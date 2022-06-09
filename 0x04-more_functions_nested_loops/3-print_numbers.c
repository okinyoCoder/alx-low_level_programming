#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 */
void print_numbers(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	putchar('\n');
}
