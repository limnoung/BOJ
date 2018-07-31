#include <stdio.h>
int main() {
	int N, M, K, i, j, x, y,sum;
	int Num[300][300] = { 0 };
	scanf("%d%d", &N, &M);
	for (int i1 = 0; i1 < N; i1++) {
		for (int i2 = 0; i2 < M; i2++) {
			scanf("%d", &Num[i1][i2]);
		}
	}
	scanf("%d", &K);
	for (int i1 = 0; i1 < K; i1++) {
		sum = 0;
		scanf("%d%d%d%d", &i, &j, &x, &y);
		for (int i2 = j - 1; i2 < y; i2++) {
			for (int i3 = i - 1; i3 < x; i3++) {
				sum += Num[i3][i2];
			}
		}
		printf("%d\n", sum);
	}
}