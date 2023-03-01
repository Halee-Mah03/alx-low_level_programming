#include "main.h"
/**
 * _strncpy - copies an inputted number of bytes
 * from string src into dest
 * @n: the number of bytes copied from src
 * @dest: buffer storing the string copy
 * @src: the source string
 *
 * Return: A ppointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;


	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
