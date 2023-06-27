#include <stdarg.h>
#include "main.h"
/**
 * specifier_info - Sets value for specifier
 * @format: The string included in format
 * @list: Arguments in va_list
 * Return: The expected specifier
 */
format_info get_info(const char *format, va_list list)
{
	int i = 1;
	format_info info;

	init_specifier_info(&info);

	while (format[i])
	{
		if (is_flag(format[i]))
		{
			fill_flag_info(&info, format[i]);
			i++;
		}
		else if (is_length(format[i]))
		{
			info.length_specifier = format[i];
			i++;
		}
		else if (is_digit(format[i]) || format[i] == '*')
		{
			if (format[i] == '*')
			{
				info.width_specifier = va_arg(list, int);
				i++;
				continue;
			}
			i += fill_width(&info, format, i);
		}
		else if (is_modifier(format[i]))
		{
			info.modifier = format[i];
			break;
		}
		else
		{
			i++;
		}
	}
	info.output = i;
	return (info);
}

/**
 * handle_format - main format function
 * @format: String to pass through
 * @list: va_list contents
 * @info: Specifier info
 * Return: characters printed
 */
int handle_format(const char *format, va_list list, format_info info)
{
	int (*action)(va_list list, format_info info);
	int length = 0;

	action = get_specifier_action(info.modifier);

	if (action)
	{
		length += action(args, info);
	}
	else
	{
		length += _putchar(*(--format));
	}
	return (length);
}

