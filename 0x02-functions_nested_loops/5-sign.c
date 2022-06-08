#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: the character to be checked
 *
 *Return: 1 and prints +, 0 and prints 0, -1 and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
