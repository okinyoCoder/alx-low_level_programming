#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: value to be checked for uppercase
 *
 * Return: 1 when uppercase and 0 when otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
