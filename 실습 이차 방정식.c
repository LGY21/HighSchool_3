#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, solve;

	solve = (b * b - 4 * a * c);

	printf("���� �������� ��� a,b,c�� �Է��Ͻÿ�");
	scanf("%d %d %d", &a, &b, &c);

	if (a == 0)
		printf("�������� ����%f�Դϴ�", -c/b);

	else
	{	

	if (solve >=0)
	{
	printf("%lf\n", (-b+sqrt(solve))/(2.0*a));
	printf("%lf\n", (-b-sqrt(solve))/(2.0*a));
    }
    else
      printf("�Ǳ��� �������� �ʽ��ϴ�.");
  }
  return 0; 

	
	
}


