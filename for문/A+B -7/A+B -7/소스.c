#include <stdio.h>


int main() {

	int n = 0, x = 0, y = 0, i = 0;

	scanf_s("%d", &n);

	for (i = 1; i < n + 1; i++) {

		scanf_s("%d %d", &x, &y);
		printf("Case #%d: %d\n", i, x + y);

	}
	return 0;
}