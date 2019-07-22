#include <stdio.h>
#include <time.h>

int main()
{
	int prices[10];
	int min;

	
	printf("-----------------------------\n");
	printf("1  2  3  4  5  6  7  8  9  10\n");
	printf("-----------------------------\n");

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		prices[i] = (rand() % 100) + 1;
		printf("%d ", prices[i]);
	}
	
	min = prices[0];
	for (int i=0 ; i < 10; i++)
	{
		if (prices[i] < min)
			min = prices[i];
	}
	printf("\n\n최솟값은 %d입니다.\n", min);

	return 0;
}