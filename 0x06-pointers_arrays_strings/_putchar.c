#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 *
 * @c: character to be printed
 *
 * Return: success 1, if error -1 and is set
 * appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
