#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: value to be checked last digit
 * Return: n when success
 */
int print_last_digit(int x)
{
	int n;

	n = x % 10;
	_putchar(n);
	return (n);
}
