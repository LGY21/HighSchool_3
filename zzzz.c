#include <stdio.h>

int main()
{

	double A;     //���� �ӵ��� 1�ʿ� 300000
	double B;
	int C;
	int D;

	A = 300000;
	B = 149600000;
	double time = B / A / 60;
	C = (int)time;
	D = (int)(time * 100) % 100;
	printf("���� �ӵ�= %lfkm \n", A);
	printf("�¾�� �������� �Ÿ�= %lfkm \n", B);
	printf("%d�� %d�� \n", C, D);


	return 0;
} 
