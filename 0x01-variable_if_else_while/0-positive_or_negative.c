#include  <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 * main- main block
 * description: get random number and print it
 * and print if number is negative, zero or positive
 * Return: 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		print("%d: is a negative", n);
	}
	if else(n == 0)
	{
		print("%d: is zero, n");
	}
	else
	{
	print("%d: is positive", n)
	}


	return (0);
}
