#include "main.h"
/**
 * strcat - this function appends the src string to the dest string,
 * overwiting the terminating null byte ( \0) at the end of dest, and 
 * then adds a teminating null byte
 *
 * @src: The source string appended to @dest
 *
 * @dest A pointer to the string to be concatenated on
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	
	dest[index] = '\0';
	return (dest);
}
