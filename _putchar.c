#include <unistd.h>
/**
 * _putchar - prints character to stdout
 * @c: The character to print
 * Return: On success 1 or -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
