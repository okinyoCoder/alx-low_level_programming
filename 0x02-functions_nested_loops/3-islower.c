#include "main.h"

/**
 * _islower - checks for lowercase character
 */
int _islower(int c)
{
	int c;

	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
