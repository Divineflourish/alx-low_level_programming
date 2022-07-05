#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to the value of n everytime
 * it executes and prints it
 * Return: 0 if (successful)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	print("%d is positive\n", n);
        else if (n == 0)
	printf("%d is negative\n", n);
        else if (n < 0)
	printf("%d is negative\n",n);
	return (0)
}
