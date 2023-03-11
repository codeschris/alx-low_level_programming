#include <stdio.h>

/**
 * main - Entry point
 * @argc: length of argument
 * @argv: argument printing program name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s", argv[0]);

	return (0);
}
