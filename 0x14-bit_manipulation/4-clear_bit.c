#include "main.h"

/**
 * clear_bit - function that sets value of bit to 0 at given index
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: Always 0 (success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
