#include <stdio.h>

/**
 * main - Entry Point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0] != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
