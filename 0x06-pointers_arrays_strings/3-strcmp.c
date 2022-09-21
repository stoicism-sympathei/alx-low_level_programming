#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: frist string
 * @s2: second string
 *
 * return: return an integer less than, equalto, or greater than zero
 * if s1 is found, respectively, to be less than, to match, or be greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
