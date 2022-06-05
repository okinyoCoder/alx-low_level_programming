#include<stdio.h>

/**
 * main - prints the alphabet in lowercase except 'e' and 'q'
 * followed by newline
 * Return: returns zero;
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		while (i != 'e' || i != 'q')
		{
			putchar(i);
		}
	}

	putchar('\n');
	return (0);
}
