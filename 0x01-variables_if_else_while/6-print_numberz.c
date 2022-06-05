#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by newline
 * Return: returns zero
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
