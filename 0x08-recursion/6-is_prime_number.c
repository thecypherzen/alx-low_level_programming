#include "main.h"

/**
 * is_prime_number - checks if an input integer is prime or not
 * @n: the number
 * Return: 1 if prime, 0 therwise.
 */
int is_prime_number(int n)
{
	unsigned int limit;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if ((n > 2) && !(n % 2))
		return (0);
	limit = (unsigned int)sqrt(n);
	return (checkprime((unsigned int)n, 3, limit));
}
/**
 * checkprime - recurrent check for prime number b/w num & sqrt(num)
 * @num: the number
 * @count: iteration
 * @limit: square root of n;
 * Return: 1 if
 */
int checkprime(unsigned int num, unsigned int count, unsigned int limit)
{
	if (!(num % count) && count <= limit)
		return (0);
	if (count > limit)
		return (1);

	count += 2;
	return (checkprime(num, count, limit));
}
