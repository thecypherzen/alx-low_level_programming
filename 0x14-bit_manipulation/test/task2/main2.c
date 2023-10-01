#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 32);
    printf("%d\n", n);
    n = get_bit(98, 64);
    printf("%d\n", n);
    n = get_bit(1024, 52);
    printf("%d\n", n);
    return (0);
}
