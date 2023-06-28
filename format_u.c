#include "main.h"

/**
 * format_u - Function to handle the u specifier format
 * @list:  list of unpassed argument
 * @info: Specifier info
 * Return: Void
 */
int format_u(va_list list, format_info info)
{
	unsigned long int n;

	if (info.length_specifier && info.length_specifier == 'l')
		n = va_arg(list, unsigned long int);
	else
		n = va_arg(list, unsigned int);

	return (print_unsigned_int(n));
}

