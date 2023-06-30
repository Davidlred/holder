#include "main.h"
/**
 * print_unsigned_integer - prints an unsigned integer.
 * @n: integer to printout
 * Return: void
 */
int print_unsigned_integer(unsigned long int n)
{
	int length = 0;

	int i;

	unsigned long int dig;

	unsigned long int  val;

	int char_len = 0;

	if (n == 0)
	{
		char_len = char_len + _putchar(n + '0');
		return (char_len);
	}

	val = n;
	while (val > 0)
	{
		length++;
		val = val / 10;
	}

	while (length > 0)
	{
		val = n;
		for (i = 1; i < length; i++)
		{
			val = val / 10;
		}
		dig = val % 10;
		length--;
		char_len = char_len + _putchar(dig + '0');
	}
	return (char_len);
}
