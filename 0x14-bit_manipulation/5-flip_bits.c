#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip
 * to get from one number to another.
 *
 * project done by : Aneesah vania
 * @n: num one.
 * @m: num two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_bits;

	for (flip_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			flip_bits++;
	}

	return (flip_bits);
}
