#include "main.h"
/**
 * format_r - Function to handle the custom r value
 * @list: list to be passed
 * @info: info of specifier
 * Return: Void
 */
int format_r(va_list list, format_info info)
{
	int length = 0;

	char *r;
	int counter = 0;

	(void)info;
	r = va_arg(list, char *);

	while (r[length])
		length++;

	while (length > 0)
		counter += _putchar(r[--length]);
	return (counter);
}


