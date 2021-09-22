#include <stdio.h>

int main() {
	int x;
	printf("enter number:");
	scanf_s("%d", &x, "\n");
	long long y = 0;
	int i = 1;
	int j = 10;
	while (i <= 11) {
		long long st = 1;
		int n = j;
		while (n > 0) {
			st = st * x;
			n--;
		}
		y = y + st * i;
		i++;
		j--;
	}
	printf("result:%d", y);
	printf("work with branches");
	//для добавления коммита
	return 0;
}