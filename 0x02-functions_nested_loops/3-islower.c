#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 * Description: single letter input
 *
 * Return: 1 if int c is lowercase, 0 if not
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
