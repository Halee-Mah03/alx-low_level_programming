#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - prints numbers if positive ,negative or zero
 *
 * Description: C program to generate random numbers and validates which is positive or negative
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{

        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        
 	if (n > 0)
        {
        printf("%d is positive\n", n);
        }
     	else if (n == 0)
        {
        printf("%d is zero\n", n);
        }
     	else (n < 0)
        {
        printf("%d is negative\n", n );
        }
     	return (0);

}
