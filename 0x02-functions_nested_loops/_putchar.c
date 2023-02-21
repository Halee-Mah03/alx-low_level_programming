#include <unistd.h>

/**
 *
 * _putchar writes the char c to stdout 
 *
 * Description: A C program to print _putchar and a new line
 *
 * Return Always 1 Success
 */

int _putchar(char c)
{
	return(write(1,&c,1));
}
