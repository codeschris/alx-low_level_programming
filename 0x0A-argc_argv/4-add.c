#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program adds two values
 * @argc: argument counter
 * @argv: argument vector containing values
 * Return: 0
 */

int main(int argc, char **argv)
{
	int n, sum = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
