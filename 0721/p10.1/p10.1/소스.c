#include <stdio.h>
#define max 10

int main()
{
	char answer1;
	int answer2, seat[max] = { 0 };

	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n)");
		scanf_s("%c", &answer1);
		if (answer1 == 'y')
		{
			printf("--------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("--------------------\n");

			for (int i = 0; i < max; i++) {
				printf("%d ", seat[i]);
			}
			printf("���° �¼��� �����Ͻðڽ��ϱ�?");
			scanf_s("%d", &answer2);

			if (seat[answer2 - 1] == 0) {
				seat[answer2 - 1] = 1;
				printf("����Ǿ����ϴ�.\n");
			}
			else
				printf("�̹� ����� �ڸ��Դϴ�.");
		}
		else if (answer1 == 'n')

			return 0;
	}
}