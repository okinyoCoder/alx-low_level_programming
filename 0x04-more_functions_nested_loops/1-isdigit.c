#include "main.h"

/**
 * _isdigit - function that checks for a digit
 *
 * @c: value to be checked for digit
 *
 * Return: 1 if it is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
