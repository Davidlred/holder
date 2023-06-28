#include "main.h"
/**
 * convert_oct - Prints an unsigned integer in octal base
 * @val: Integer tobe converted
 * @c: Pointer to character
 * Return: Void
 */
void convert_oct(unsigned long int val, int *c)
{
	unsigned long int num;
	
	unsigned long int rtn;

	if (val <= 7)
	{
		*c += _putchar(val + '0');
		return;
	}

	num = val / 8;
	rtn = val % 8;

	convert_oct(num, c);
	*c += _putchar(rtn + '0');
}
