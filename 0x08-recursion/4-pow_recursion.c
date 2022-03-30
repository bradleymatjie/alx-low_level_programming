#include "main.h"
#include <math.h>

/**
 * _pow_recursion - a function that returns x to the power of y
 * @x: base value
 * @y: exponent value
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (pow(x, y));
}
