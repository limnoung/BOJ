#include <stdio.h>
int main() {
	int N, sum = 0, C;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &C);
		getchar();
		sum += C - 1;
	}
	printf("%d", sum+1);
}