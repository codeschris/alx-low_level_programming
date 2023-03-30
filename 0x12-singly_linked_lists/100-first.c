#include <stdio.h>

void main_construct(void) __attribute__((constructor));
/**
 * main_construct - constructor prints a msg before main
 * runs
 *
 * Return: Nothing
 */

void main_construct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
