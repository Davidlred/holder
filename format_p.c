#include "main.h"
/**
 * format_p - a Function to handle the p specifier
 * @list: list of argument
 * @info: value stored info
 * Return: Void
 */
int format_p(va_list list, format_info info)
{
	void *val;

	unsigned long int address;

	int count = 0;

	(void)info;
	val = va_arg(list, void *);

	if (!val)
		return (_puts("(nil)"));

	address = *((unsigned long int *)val);
	count = count + _puts("0x");
	convert_hex(address, 1, &count);
	return (count);
}
