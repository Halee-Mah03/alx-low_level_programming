#include "main.h"

/**
 * _strlen - THe length of a string
 *
 * @s: input string
 *
 * Return: index
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;

	return (index);
}
