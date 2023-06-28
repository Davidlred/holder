#include "main.h"
/**
 * format_b - Function to handle the b specifier
 * @list: list of unpassed argument
 * @info: info of passed specifier
 * Return: Void
 */
int format_b(va_list list, format_info info)
{
	int counter = 0;

	(void)info;

	convert_bin(&counter, va_arg(list, unsigned int));
	return (counter);
}


