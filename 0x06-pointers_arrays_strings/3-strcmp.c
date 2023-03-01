#include "main.h"
/**
 * _strcmp - comparing pointers to strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return:If str1 > str2, the positive difference of the
 * first unmatched characters
 * if str1 == str2, 0
 * if str1 < str 2, the negative difference of the first 
 * unmatched character
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	
	return (*s1 - *s2);

}
