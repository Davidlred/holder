#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_specifier_action - Function to pick the appropriate action
 * for a specifier.
 * @s: Specifier character
 * Return: Specifier action for the specifier s, NULL
 * if the specifier is not valid.
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
 * getROT13char - Gets the ROT13 of a char.
 * @c: Char to look up
 * Description: This function assumes any char
 * passed to it is an alpha.
 * Return: The ROT13 char.
 */
char getROT13char(char c)
{
	static const char *rot13Lower = "nopqrstuvwxyzabcdefghijklm";
	static const char *rot13Upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	return (c < 91 ? rot13Upper[c - 65] : rot13Lower[c - 97]);
}

/**
 * init_specifier_info - Initializes the specifier info
 * @info: pointer to the info to initialize
 * Return: Void
 */
void init_specifier_info(format_info *info)
{
	info->alt = 0;
	info->space = '\0';
	info->output = 0;
	info->modifier = '\0';
	info->length_specifier = '\0';
	info->width_specifier = 0;
}

/**
 * is_digit - Checks if a char is digit
 * @c: Char to check
 * Return: 1 for success 
 */
int is_digit(char c)
{
	return (c >= 48 && c <= 57);
}
