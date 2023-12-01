#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int add(int a, int b);
int mul(int a, int b);
int sub(int a, int b);
int divv(int a, int b);
int mod(int a, int b);

int main(void)
{
	int min = -111;
	int max = 111;
	int a, b;

	srand(time(NULL));
	a = (rand() % (max - min + 1)) + min;
	b = (rand() % (max - min + 1)) + min;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %d\n", a, b, divv(a, b));
	printf("%d %% %d = %d\n", a, b, mod(a, b));
}