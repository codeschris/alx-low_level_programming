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
	int (*func)(int, int);

	if (argc != 4)
		exit(98);
	if (func == NULL)
		exit(99);

	func = get_op_func(argv[2]);
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
