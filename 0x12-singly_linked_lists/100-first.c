#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - a function that gives a sentence before the main
 * function is executed
 * Return: Always 0 (success)
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
