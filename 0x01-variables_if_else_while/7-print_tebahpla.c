#include<stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, using putchar function
 * Return: returns zero
 */
int main(void)
{
	char i;

	for (i = '122'; i <= '96'; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
