
#include "main.h"

/**
 * get_bit - function that returns the value of bit at given index
 * @n: number to search
 * @index: index of the bit
 * Return: Always 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
