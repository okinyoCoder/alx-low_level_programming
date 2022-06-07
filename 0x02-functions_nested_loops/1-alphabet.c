#include "main.h"

/**
 * print_alphabet - prints alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	for ( char n = 'a'; n < 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
