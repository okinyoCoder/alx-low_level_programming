#include<stdio.h>

/**
 * main - prints alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return: returns zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= z; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= z; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
