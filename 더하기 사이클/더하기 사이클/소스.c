#include <stdio.h>

int main()
{	
	int number;
	int result;
	int a, b, c, d;
	int cnt = 0;
	
	scanf_s("%d", &number);

	result = number;
	


	while (1)
	{
		a = number / 10;
		b = number % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		number = d;
		cnt++;
		if (number==result)
			break;
		
	}

	printf("%d", cnt);
}