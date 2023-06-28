#include "main.h"
/**
 * fill_flag_info - Fill flag details
 * @info: The info object
 * @flag: a flag to swtich values
 */
void fill_flag_info(format_info *info, char flag)
{
	switch (flag)
	{
	case ' ':
		info->space = ' ';
		break;
	case '+':
		info->space = '+';
		break;
	case '#':
		info->alt = 1;
	default:
		break;
	}
}

/**
 * fill_width - Sets the width flag value
 * @info: info specifier
 * @s: String to a format pointer
 * @i: string position
 * Return: width
 */
int fill_width(format_info *info, const char *s, int i)
{
	int c = 0, e;
	int j = i;
	int w = 0;
	int d;

	while (is_digit(s[i]))
	{
		c++;
		i++;
	}

	i = j;
	e = c;
	while (is_digit(s[i]))
	{
		d = s[i] - 48;
		w += _pow(10, --c) * d;
		i++;
	}

	info->width_specifier = w;
	return (e);
}
