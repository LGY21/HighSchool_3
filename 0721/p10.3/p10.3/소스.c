#include <stdio.h>

int main()
{
	int slayer[11] = { 0 }, ans;
	while (1)
	{
		printf("��� �ĺ��ڸ� �����Ͻðڽ��ϱ�?(���� -1):");
		scanf_s("%d", &ans);
		if (ans == -1)
			break;
		if (ans > 0 && ans < 11)
				slayer[ans]++;
		}
		printf("\n��\t��ǥ���\n");

		for (int i = 1; i <= 10; i++)
			printf("%d\t%d\n", i , slayer[i]);

		return 0;
	}