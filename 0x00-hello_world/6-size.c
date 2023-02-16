#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int longintType;
	long long int llintType;

	printf(sizeof(intType));
	printf(sizeof(charType));
	printf(sizeof(floatType));
	printf(sizeof(longintType));
	printf(sizeof(llintType));

	return (0);
}
