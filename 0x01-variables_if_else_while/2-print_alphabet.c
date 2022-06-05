#include<stdio.hi>

/**
 * main - prints a to z using putchar function
 * Return: returns zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
