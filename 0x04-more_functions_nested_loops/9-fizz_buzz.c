#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Print 1 to 100 but multiples of 3 get fizz, 
 * multiples of 5 get buzz and 15 gets fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);

		printf(" ");
	}

	return (0);
}
