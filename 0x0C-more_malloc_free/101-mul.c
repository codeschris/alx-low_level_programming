#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of args
 * @argv: argument
 *
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int n1, n2, product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		product = n1 * n2;
		printf("%d\n", product);
		return (0);
	}
}
