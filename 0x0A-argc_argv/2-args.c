#include <stdio.h>

/**
 * main - function prints all arguments passed
 *
 * @argc: no. of arguments passed
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
