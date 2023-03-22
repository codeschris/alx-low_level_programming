#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints opcodes
 *
 * @argc: args counter
 * @argv: array of args being passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	i = 0;
	if (x > 0)
	{
		while (i < (x - 1))
			printf("%02hhx", ptr[i++]);
		printf("%hhx\n", ptr[i]);
	}
	return (0);
}
