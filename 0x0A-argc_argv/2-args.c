

#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i  <  argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	rteun (0);
}
