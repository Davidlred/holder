#include "main.h"
/**
 * convert_oct - Prints an unsigned integer in octal base
 * @val: number to be converted
 * @c: Pointer to character
 * Return: Void
 */
void convert_oct(unsigned long int val, int *c)
{
	unsigned long int a;

	unsigned long int b;

	if (val <= 7)
	{
		*c = *c +  _putchar(val + '0');
		return;
	}

	a = val / 8;

	b = val % 8;

	convert_oct(a, c);
	*c = *c + _putchar(b + '0');
}
