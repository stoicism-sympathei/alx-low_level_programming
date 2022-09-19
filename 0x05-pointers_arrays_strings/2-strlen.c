#include  "main.h"

/**
 * _strlen - returns the length of the string
 * @s: the string
 *
 * Return: the length of the s string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
