#include <stdio.h>
int main() {
	int N, G[100][100] = { 0 };
	int index=1, ans;
	scanf("%d",&N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &G[i][j]);
		}
	}
	while (index != N) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				ans = 0;
				for (int k = 0; k < N; k++) {
					ans += G[i][k] * G[k][j];
				}
				G[i][j] += ans;
				if (G[i][j] > 1)
					G[i][j] = 1;
			}
		}
		index++;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d ", G[i][j]);
		}
		printf("\n");
	}
}