#include <stdio.h>
int main() {
	int N, count;
	count = 0;
	scanf("%d", &N);
	while (1) {
		if (N < 0) {
			count = -1;
			break;
		}
		if (N == 0)
			break;
		if (N % 3 == 0 && N % 5 != 0) {
			count++;
			N -= 3;
		}
		else {
			count++;
			N -= 5;
		}
	}
	printf("%d", count);
}