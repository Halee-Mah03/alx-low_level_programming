#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src,
 * including the terminating null byte, to a buffer pointed to by @dest.
 *
 * @dest: A buffer to copy the string to
 *
 * @src: The source string to copy
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)

{
	int 1 = 0;
	int b = 0;

	while (*(src + 1) !='\0')
	{
		1++;
	}
		for (; b < 1; b++)

	{
		dest[b] = src[b];

	}

	dest(1)= '\0';
	return (dest);
}
