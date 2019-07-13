#include <stdio.h>

int main()
{

	double A;     //빛의 속도는 1초에 300000
	double B;
	int C;
	int D;

	A = 300000;
	B = 149600000;
	double time = B / A / 60;
	C = (int)time;
	D = (int)(time * 100) % 100;
	printf("빛의 속도= %lfkm \n", A);
	printf("태양과 지구와의 거리= %lfkm \n", B);
	printf("%d분 %d초 \n", C, D);


	return 0;
} 
