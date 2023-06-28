#include <stdarg.h>
#include "main.h"
/**
 * format_x - Function to handle the x specifier
 * @list: list of recieved argument
 * @info: info value
 * Return: Void
 */
int format_x(va_list list, format_info info)
{
	int counter = 0;

	unsigned long int n;

	int length = 0;

	if (info.length_specifier && info.length_specifier == 'l')
		n = va_arg(list, unsigned long int);
	else
		n = va_arg(list, unsigned int);

	if (info.alt && n > 0)
		length += 2;

	if (info.width_specifier)
	{
		length += get_int_length(n, 16);
		if (length < info.width_specifier)
		{
			length = info.width_specifier - length;
			counter += length;
			print_space(length);
		}
	}

	if (info.alt && n > 0)
		counter += _puts("0x");

	convert_hex(n, 1, &counter);
	return (counter);
}

