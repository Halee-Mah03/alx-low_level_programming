#include "main.h"


/**
 * _isalpha - to check if a character is alphabetic
 *
 * @c: the char used
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))

		return (1);

	else

		return (0);
}
