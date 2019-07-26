#include <stdio.h>

int main()
{
	int a;

	scanf_s("%d", &a);

	for (int i = a; i > 0; i--)

		printf("%d\n", i);

	return 0;
}