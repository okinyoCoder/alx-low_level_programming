#include<stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse, using putchar function
 * Returns: returns zero
 */
int main(void)
{
	char i = 'z';

	while ( i <= 'a')
	{
		putchar(i);
		i++;
	}
	
	putchar('\n');
	return (0);
	

}
