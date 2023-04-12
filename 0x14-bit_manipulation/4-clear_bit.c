#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 1.
 * @n: pointer to the num to change.
 *
 * project done by: Aneesah Vania.
 * @index: index of the bit.
 *
 * Return: 1 for success, -1 if unsuccessfull
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
