#include "main.h"
/**
 * _sqrt_helper - find the sqr of the number n
 * @n: the number
 * @guess: the sqr of number
 * Return: return the sqrt of the number n
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n : the number
 * Return: return the sqr
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (_sqrt_helper(n, 1));
}
