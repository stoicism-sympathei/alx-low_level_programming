#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: the array
 * @size: the size of the array
 * @action: the action to do on array element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		exit(98);
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
