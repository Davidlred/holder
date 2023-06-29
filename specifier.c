#include "main.h"
/**
 * information - Fill flag details
 * @info: The info object
 * @flag: a flag to swtich values
 */
void information(format_info *info, char flag)
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
 * width_flag - Sets the width flag value
 * @info: info specifier
 * @s: String to a format pointer
 * @n: string position
 * Return: width
 */
int width_flag(format_info *info, const char *s, int n)
{
	int c = 0;
	int i;
	int j = n;
	int w = 0;
	int d;

	while (is_digit(s[n]))
	{
		c++;
		n++;
	}

	n = j;
	i = c;
	while (is_digit(s[n]))
	{
		d = s[i] - 48;
		w += _pow(10, --c) * d;
		n++;
	}

	info->width_specifier = w;
	return (i);
}
