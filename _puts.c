#include "main.h"
/**
 * _puts - returns strings of characters.
 * @s: The string value to print
 * Return: The number of characters.
 */
int _puts(char *s)
{
	int j = 0;

	while (s[j])
		_putchar(s[j++]);

	return (j);
}

