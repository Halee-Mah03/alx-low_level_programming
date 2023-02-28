#include "main.h"
/**
 * _puts - Print string to stdout
 *
 * @str: String to be printed
 *
 */
void _puts(char *str)
{
	while (*str)

		_putchar(*str++);

	_putchar('\n');
}
