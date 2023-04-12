#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endianness
 * Return: 0 if big endian, 1 if little endian
 *
 * project done by: Aneesah Vania
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
