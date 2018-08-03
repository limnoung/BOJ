#include <iostream>
#include <queue>
using namespace std;
char Map[50][50] = { 0 };
int M, N, Index;
void BFS(int i, int j) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	Map[i][j] = Index;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if (x < M - 1 && Map[x + 1][y] == 0) { // E
			Map[x + 1][y] = Index;
			q.push(make_pair(x + 1, y));
		}
		if (y < N - 1 && Map[x][y + 1] == 0) { // S
			Map[x][y + 1] = Index;
		}
		if (x > 0 && Map[x - 1][y] == 0) { //W
			Map[x - 1][y] = Index;
			q.push(make_pair(x - 1, y));
		}
		if (y > 0 && Map[x][y - 1] == 0) { //N
			Map[x][y - 1] = Index;
			q.push(make_pair(x, y - 1));
		}
	}
}
int main() {
	int T, K;
	scanf("%d", &T);
	while (T) {
		int X, Y;
		Index = 0;
		T--;
		scanf("%d %d %d", &M, &N, &K);
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				Map[i][j] = -1;
			}
		}
		for (int i = 0; i < K; i++) {
			scanf("%d %d", &X, &Y);
			Map[X][Y] = 0;
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (Map[i][j] == 0) {
					Index++;
					BFS(i, j);
				}
			}
		}
		printf("%d\n", Index);
	}
}