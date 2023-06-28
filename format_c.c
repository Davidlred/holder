#include "main.h"
/**
 * format_c - a function to handle the c operator
 * @list: Argument list to pass
 * @info: value of info
 * Return: Void
 */
int format_c(va_list list, format_info info)
{
	int length = 1;

	int count = 0;

	if (info.width_specifier)
	{
		if (length < info.width_specifier)
		{
			length = info.width_specifier - length;
			count += length;
			print_space(length);
		}
	}

	count += _putchar(va_arg(list, int));
	return (count);
}
