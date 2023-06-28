#include "main.h"
/**
 * convert_bin - returns  an unsigned integer to binary
 * @num: Int to convert
 * @counter: Pointer to counter
 * Return: Void.
 */
void convert_bin(int *counter, unsigned int num)
{
	unsigned int j;

	unsigned int k;

	if (num <= 1)
	{
		*counter += _putchar(num + '0');
		return;
	}

	j = num / 2;
	k = num % 2;
	convert_bin(counter, j);
	*counter += _putchar(k + '0');
}

