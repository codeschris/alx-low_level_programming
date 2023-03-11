#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies 2 numbers
 * @argc: argument counter
 * @argv: argument vector containing values
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n1, n2, prod;

	if (argc != 3)
		return (1);
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		prod = n1 * n2;
		printf("%d\n", prod);
		return (0);
	}
}
