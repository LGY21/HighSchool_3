#include <stdio.h>

int get_max(int x, int y)
{
	if (x > y)return(x);
	else return(y);
}
int main()
{
	int x,y, answer;

	printf("������ �Է��Ͻÿ�");
	scanf_s("%d %d", &x,&y);
	answer = get_max(x, y);
	printf("%d", answer);

	return 0;

}