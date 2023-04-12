#include "main.h"

/**
 * get_bit - returns the value of a bit index
 * @n: num to search
 * @index: index of the bit
 *
 * project done by:Aneesah Vania
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit;

	if (index > 63)
		return (-1);

	get_bit = (n >> index) & 1;

	return (get_bit);
}
