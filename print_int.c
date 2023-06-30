#include "main.h"
#include <limits.h> 
/**
 * prints_integer - prints out an int
 * @n: integer to be  printed
 * Return: void
 */
int print_integer(long int n)
{
	int dig;

	int length = 0;

	int value;

	int i;

	int is_min = (n == INT_MIN);
	int char_len = 0;

	if (is_min)
		n += 1;

	if (n < 0)
	{
		char_len = char_len + _putchar('-');
		n = n * -1;
	}
	if (n == 0)
	{
		char_len = char_len +  _putchar(n + '0');
		return (char_len);
	}

	value = n;
	while (value > 0)
	{
		length++;
		value = value / 10;
	}

	while (length > 0)
	{
		if (is_min && length == 1)
			break;

		value = n;
		for (i = 1; i < length; i++)
			value = value / 10;

		dig = value % 10;
		
		length--;
		char_len = char_len +  _putchar(dig + '0');
	}
	if (is_min)
		char_len = char_len +  _putchar(8 + '0');
	return (char_len);
}


