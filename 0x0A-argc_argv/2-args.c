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
	int i;

	if (*argv[0] != '\0')
	{
		for (i = 0; i < argc; i++)
			printf("\n%s", argv[i]);
	}
}
