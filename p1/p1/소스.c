#include <stdio.h>

int main()
{
	int krw; //��ȭ	
	int usd; //�޷�ȭ

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�");
	scanf_s("%d", &usd);

	krw = 1120 * usd;
	printf("�޷�ȭ%d�޷��� %d���Դϴ�.",usd,krw);

	return 0;

}