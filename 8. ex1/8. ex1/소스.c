#include <stdio.h>

int square(int n)
{
	return n * n;
}

int get_max(int x, int y)
{
	if (x > y) 
		return(x);    
	else return(y); 
}

void draw_rect(int side)
{
	int x, y;
	for (y = 0; y < side; y++)
	{ for (x = 0; x < side; x++)
		printf("*");                 
	    printf("\n"); }          
	return; }

int main()
{
	int  a,b, c, i, sum;

	printf("제곱값을 입력하시오");
		scanf_s("%d %d", &i, &c);
		sum = square(i);
		a = get_max(i,c);
		draw_rect(i,c);


		printf("%d %d %d\n", sum, a, draw_rect);
}