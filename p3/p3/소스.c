#include <stdio.h>

int main()
{
	int year,result;

	printf("������ �Է��Ͻÿ�");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 400 == 0) || (year % 100));

	printf("result= %d", result);

	return 0;
	

}
