#include "main.h"
/**
 * convert_hex - a function that prints a function in Hex
 * @num: Integer to convert
 * @lower: checks if to use lowercase or uppercase
 * @c: Pointer to character 
 * Return: Void always.
 */
void convert_hex(unsigned long int length, int less, int *c)
{
	unsigned long int i;

	unsigned long int j;

	if (length <= 9)
	{
		*c += _putchar(length + '0');
		return;
	}

	if (length <= 15)
	{
		*c += _putchar((length - 10) + (less ? 'a' : 'A'));
		return;
	}

	i = length / 16;
	j = length % 16;
	convert_hex(i, less, c);

	if (j <= 9)
		*c += _putchar(j + '0');
	else
		*c += _putchar((j - 10) + (less ? 'a' : 'A'));
}
