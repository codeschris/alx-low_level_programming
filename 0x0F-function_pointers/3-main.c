#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program performs defined operations
 *
 * @argc: argument counter
 * @argv: argument vetor containing arguments passed
 *
 * Return: 0, 98 for error, 99 when op is not included
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a, b;
		int (*func)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(a, b));
		return (0);
	}
	printf("Error\n");
	exit(98)
}
