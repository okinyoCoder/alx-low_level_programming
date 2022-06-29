#include<stdio.h>
#include "main.h"

/**
 * main - print  prints the number of arguments passed to the program
 * @argc: parameter showing counter of arguements
 * @argv: parameter that shows array of arguements
 *
 * Return: 0 when successful execution
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc -1);
	return(0);
}
