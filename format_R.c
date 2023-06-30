#include "main.h"
/**
 * format_R - a function that deals with the R specifier
 * @list: Argument list
 * @info: Specifier info
 * Return: Void
 */
int format_R(va_list list, format_info info)
{
	int k = 0;
	int counter = 0;
	char *n;

	(void)info;
	n = va_arg(list, char *);

	while (n[k])
	{
		if (_isalpha(n[k]))
			counter = counter + _putchar(ROT13(n[k++]));
		else
			counter = counter + _putchar(n[k++]);
	}
	return (counter);
}

