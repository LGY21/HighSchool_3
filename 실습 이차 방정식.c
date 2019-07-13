#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, solve;

	solve = (b * b - 4 * a * c);

	printf("이차 방정식의 계수 a,b,c를 입력하시오");
	scanf("%d %d %d", &a, &b, &c);

	if (a == 0)
		printf("방정식의 근은%f입니다", -c/b);

	else
	{	

	if (solve >=0)
	{
	printf("%lf\n", (-b+sqrt(solve))/(2.0*a));
	printf("%lf\n", (-b-sqrt(solve))/(2.0*a));
    }
    else
      printf("실근이 존재하지 않습니다.");
  }
  return 0; 

	
	
}


