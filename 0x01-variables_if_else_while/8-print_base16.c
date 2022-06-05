#include<stdio.h>

/**
*main - program that prints all the numbers of base 16 in lowercase
*
*Return: returns zero 
*/
int main(void)
{
	int n = 48;
	char i;

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
