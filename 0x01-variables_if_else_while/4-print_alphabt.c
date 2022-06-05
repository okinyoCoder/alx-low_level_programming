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
		if (i == 'e' && i == 'q')
			putchar(i);
			continue;
	}

	putchar('\n');
	return (0);
}
