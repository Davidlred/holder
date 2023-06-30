#include "main.h"
/**
 * format_S - Function to handle the S specifier
 * @list: list of argument
 * @info: value to be contained
 * Return: Void
 */
int format_S(va_list list, format_info info)
{
	int i = 0;

	char *n;

	int counter = 0;

	(void)info;

	n = va_arg(list, char *);

	while (n[i])
	{
		if (n[i] < 32 || n[i] > 126)
		{
			counter = counter + _puts("\\x");
			if (n[i] <= 15)
				counter = counter + _putchar('0');
			convert_hex(n[i++], 0, &counter);
			continue;
		}
		counter = counter + _putchar(n[i++]);
	}
	return (counter);
}

