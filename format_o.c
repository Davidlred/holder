#include "main.h"
/**
 * format_o - a Function that handles the o specifier
 * @list: list of arguments
 * @info: info of the specifiers
 * Return: Void
 */
int format_o(va_list list, format_info info)
{
	int count = 0;
	unsigned long int n;
	int length = 0;

	if (info.length_specifier && info.length_specifier == 'l')
		n = va_arg(list, unsigned long int);
	else
		n = va_arg(list, unsigned int);

	if (info.alt && n > 0)
		length = length + 1;
	if (info.width_specifier)
	{
		length = length + get_int_length(n, 8);
		if (length < info.width_specifier)
		{
			length = info.width_specifier - length;
			count = count + length;
			space_printer(length);
		}
	}

	if (info.alt && n > 0)
		count = count + _puts("0");
	convert_oct(n, &count);
	return (count);
}

