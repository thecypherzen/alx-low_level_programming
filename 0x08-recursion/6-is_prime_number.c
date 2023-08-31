#include "main.h"

/**
 * is_prime_number - checks if an input integer is prime or not
 * @n: the number
 * Return: 1 if prime, 0 therwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if ((n > 2) && !(n % 2))
		return (0);
	return (checkprime(n, 3));
}
/**
 * checkprime - recurrent check for prime number b/w num & sqrt(num)
 * @num: the number
 * @count: iteration
 * Return: 1 if
 */
int checkprime(int num, int count)
{
	if (!(num % count) && count <= num / 2)
		return (0);
	else if (count > num / 2)
		return (1);

	count += 2;
		return (checkprime(num, count));
}
