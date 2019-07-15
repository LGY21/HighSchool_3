#include <stdio.h>

int main()
{
	int n;
	int i = 1;

	printf("원하는 구구단의 단을 입력하시오");
	scanf_s("%d",&n);

	while (i <= 9)
	{
		printf("%d*%d=%d\n", n, i, n * i);
		i++;
	}
	return 0;
}