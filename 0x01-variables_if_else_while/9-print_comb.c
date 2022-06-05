#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n = 44;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(n);
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
