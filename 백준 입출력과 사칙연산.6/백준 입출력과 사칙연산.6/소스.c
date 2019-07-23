#include <stdio.h>

int main()
{
	double a, b;
	
	scanf_s("%lf %lf",&a,&b);
		if(0 < a && b < 10)
			printf("%.9lf", a/b);

}