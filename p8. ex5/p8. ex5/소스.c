#include <stdio.h>		

int power(int x, int y)
{
	int i;
	long result = 1;

	for (i = 0; i < y; i++)
		result *= x;
	return result;
}

int main()
{
	int x, y, sum;

	
	scanf_s("%d %d", &x, &y);
	sum = power(x, y);
	printf("%d", sum);

	return 0;
}