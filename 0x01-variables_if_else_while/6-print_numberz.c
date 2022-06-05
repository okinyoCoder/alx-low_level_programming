#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by newline
 * Return: returns zero
 */
int main(void)
{
	int i;

	for (i = 0; i <=9; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
