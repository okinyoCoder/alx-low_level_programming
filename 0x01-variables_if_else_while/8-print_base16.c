#include<stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: returns zero
 */
int main(void)
{
	char i;
	int n = 48;

	for (i = 'a'; i <= 'f'; i++)
	{
		while (n < 58)
		{
			putchar(n);
			n++;
		}
		putchar(i);
	}
	
	putchar('\n');
	return (0);
}
