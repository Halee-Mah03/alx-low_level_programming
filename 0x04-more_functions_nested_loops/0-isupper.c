#include "main.h"
/**
 * _isupper - checks for uppercase
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 if is lowercase
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);

}
