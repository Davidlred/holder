#include <stdlib.h>
#include "main.h"

/**
 * check_specifier - Function to pick the appropriate action
 * for a specifier.
 * @s: Specifier character
 * Return: Specifier action
 */
int (*check_specifier(char s))(va_list list, format_info info)
{
	int i = 0;
	specifier specifiers[] = {
		{'c', format_c},
		{'s', format_s},
		{'S', format_S},
		{'%', format_percent},
		{'i', format_d_i},
		{'d', format_d_i},
		{'b', format_b},
		{'p', format_p},
		{'u', format_u},
		{'x', format_x},
		{'X', format_X},
		{'o', format_o},
		{'r', format_r},
		{'R', format_R},
		{'\0', NULL}};

	while (specifiers[i].car)
	{
		if (specifiers[i].car == s)
			return (specifiers[i].action);
		i++;
	}

	return (NULL);
}



/**
 * ROT13 - Gets the ROT13 of a char.
 * @c: Char to look up
 * Return: The ROT13 char.
 */
char ROT13(char c)
{
	static const char *lowercase = "nopqrstuvwxyzabcdefghijklm";
	static const char *uppercase = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	if (c < 91)
		return (uppercase[c - 65]);
	else
		return (lowercase[c - 97]);
}

/**
 * initialize_info - Initializes the specifier info
 * @info: pointer to the info to initialize
 * Return: Void
 */
void initialize_info(format_info *info)
{
	info->alt = 0;
	info->space = '\0';
	info->output = 0;
	info->modifier = '\0';
	info->length_specifier = '\0';
	info->width_specifier = 0;
	info->position = -1;
}

/**
 * print_max - prints the max of two digits
 * @a: First int
 * @b: Second int
 * Return: The max int
 */
int print_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}


