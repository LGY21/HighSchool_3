#include <stdio.h>

int main()
{
	int n;

	printf("값을 입력하시오");
	scanf_s("%d", &n);

	if (n >= 100)
	printf("large");

	else

	printf("small");

	return 0;
}