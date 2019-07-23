#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;

	scanf_s("%d%d", &a, &b);
	printf("%d\n", a * ((b % 100) % 10));
	printf("%d\n", a * ((b/10)%10));
	printf("%d\n", a * (b/100));
	printf("%d\n", a * b);

	return 0;
}