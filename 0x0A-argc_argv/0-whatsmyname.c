#include <stdio.h>

/**
 * main - Entry point
 * @argc: length of argument
 * @argv: argument printing program name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);

	return (0);
}
