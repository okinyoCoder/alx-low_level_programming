#include<stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, using putchar function
 * Return: returns zero
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
