#include "main.h"
/**
 * convert_bin - returns  an unsigned integer to binary
 * @b: Int to convert
 * @a: Pointer to counter
 * Return: Void.
 */
void convert_bin(int *a, unsigned int b)
{
	unsigned int j;

	unsigned int k;

	if (b <= 1)
	{
		*a = *a + _putchar(num + '0');
		return;
	}

	j = b / 2;

	k = b % 2;

	convert_bin(a, j);
	*a = *a + _putchar(k + '0');
}

/**
 * convert_hex - a function that prints a function in Hex
 * @a: Integer to convert
 * @b: checks if to use lowercase or uppercase
 * @c: Pointer to character
 * Return: Void always.
 */
void convert_hex(unsigned long int a, int b, int *c)
{
	unsigned long int i;

	unsigned long int j;

	if (a <= 9)
	{
		*c = *c + _putchar(length + '0');
		return;
	}

	if (a <= 15)
	{
		*c = *c +  _putchar((length - 10) + (b ? 'a' : 'A'));
		return;
	}

	i = a / 16;
	j = a % 16;
	convert_hex(i, b, c);

	if (j <= 9)
		*c = *c +  _putchar(j + '0');
	else
		*c = *c + _putchar((j - 10) + (less ? 'a' : 'A'));
}

