#include <stdio.h>

int main()
{
	int n;

	printf("숫자를 입력하시오 ");
	scanf("%d",&n);
	if (n >= 100) 
		printf("large \n");
	
	else
		printf("small \n");
	

	return 0;

}
