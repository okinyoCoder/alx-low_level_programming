#include <stdio.h>

/**
 * main - program that prints all possible combinations of two-digit numbers
 *
 * Return: returns zero
 */
int main(void)
{
	int i;
	int j;
	int a, b, c, d;

	for (i = 0; i < 99; i++)
	{
		for (j = 1; j < 100; j++)
		{
			a = i / 10;
			b = i % 10;

			c = j / 10;
			d = j % 10;
			if (i < j)
			{
				putchar(a);
				putchar(b);
				putchar(32); 
				putchar(c);
				putchar(d);
				if ((a == 9) && (b == 8) && (c == 9) && (d == 9))
				{
					continue;
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
