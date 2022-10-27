#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number you want to get index of
 * @index: the index of the bit that you want
 *
 * Return: the value of the bit at the index inddex or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > 63) ? -1 : (n & (1 << index)) ? 1 : 0);
}
