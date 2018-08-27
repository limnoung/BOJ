#include <cstdio>
int main()
{
	int Ans[101][101] = { 0 };
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &Ans[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int t;
			scanf("%d", &t);
			Ans[i][j] += t;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", Ans[i][j]);
		}
		printf("\n");
	}
}