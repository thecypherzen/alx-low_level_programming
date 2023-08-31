#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: the number
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0 || !(_is_perfect_sqr((unsigned long)n)))
		return (-1);
	return (_cal_sqrt(n, n / 2));
}
/**
 * _cal_sqrt - calculates squareroot of a number by repeated approximation
 * @num: the number
 * @approx: the first approximation of sqrt(num)
 * Return: sqrt of num
 */
int _cal_sqrt(int num, int approx)
{
	int _next;

	_next = (approx + (num / approx)) / 2;
	if (_next == approx)
		return (approx);
	else
		return (_cal_sqrt(num, _next));
}
/**
 * _is_perfect_sqr - uses _checkr to check if num is a perfect sqr
 * @n: the number
 * Return: 1 if perfect squre, 0 otherwise
 */
int _is_perfect_sqr(unsigned long n)
{
	unsigned long left, right;

	left = 1, right = n;
	return (_checkr(n, left, right));
}
/**
 * _checkr - check of a num is a natural number
 * @num: the number
 * @l: the left range
 * @r: the right of range
 * Return: 1 if true, 0 otherwise.
 */
int _checkr(unsigned long num, unsigned long l, unsigned long r)
{
	unsigned long mid, midsqrmax;

	midsqrmax = (pow(2, 32) - 1) * pow(2, 32);
	mid = l + ((r - l) / 2);

	if (l > r || mid * mid > midsqrmax)
		return (0);
	if (mid * mid == num)
		return (1);
	if (mid * mid < num)
		return (_checkr(num, (mid + 1), r));
	return (_checkr(num, l, (mid - 1)));
}
