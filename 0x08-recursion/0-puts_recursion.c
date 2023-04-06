#include "main.h"

/**
 * _puts_recursion _ a function that prints a string, followed by a new line
 * @s: the string to print
 * Return: 0 (successful).
 */
void _put_recurion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n')
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
