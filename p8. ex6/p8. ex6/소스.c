#include <stdio.h>

int factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)
		result *= i;
	return result;
}

int main()
{
	int i, sum;

	scanf_s("%d", &i);
	sum = factorial(i);
	printf("%d", sum);

	return 0;
}