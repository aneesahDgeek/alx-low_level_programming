#include "main.h"
/**
 * _puts - the entry function
 *@str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
