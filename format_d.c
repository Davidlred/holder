#include "main.h"
/**
 * format_d_i - Function to handle the d and i specifiers
 * @list: Argument list
 * @info: Specifier info
 * Return: Void
 */
int format_d_i(va_list list, format_info info)
{
	int count = 0;

	long int n;

	int length;

	if (info.length_specifier && info.length_specifier == 'l')
		n = va_arg(list, long int);
	else
		n = va_arg(list, int);

	if (info.width_specifier)
	{
		length = _strlen(n, 10);
		if (n < 0)
			length++;
		if (length < info.width_specifier)
		{
			length = info.width_specifier - length;
			count = count + length;
			space_printer(length);
		}
	}

	if (info.space && n >= 0)
		count = count + _putchar(info.space);

	count = count + print_int(n);
	return (count);
}

