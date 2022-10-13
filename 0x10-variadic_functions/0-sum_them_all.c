#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters of the function
 *
 * @n: the number of parameters
 *
 * Return: the sum of all the parameters, or 0 is n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
