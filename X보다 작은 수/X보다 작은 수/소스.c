#include <stdio.h>

int main()
{
	int N, X, arr;

	scanf_s("%d %d", &N, &X);
	
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d",&arr);



		if (X > arr)
			printf("%d ", arr);
	}

}