#include "main.h"
/**
 * format_percent - Function to handle the % specifier and print it out
 * @list: list of argument
 * @info: info value
 * Return: Void
 */
int format_percent(va_list list, format_info info)
{
	(void)list;
	(void)info;

	return (_putchar('%'));
}
