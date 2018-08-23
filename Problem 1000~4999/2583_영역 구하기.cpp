#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
char map[101][101] = { 0 };
int M, N, K,cnt; 
vector<int> area;
void DFS(int y, int x) {
	cnt++;
	if (y + 1 < M && map[y + 1][x] == 0) {
		map[y+1][x] = '1';
		DFS(y + 1, x);
	}
	if (y - 1 >= 0 && map[y - 1][x] == 0) {
		map[y - 1][x] = '1';
		DFS(y - 1, x);
	}
	if (x + 1 < N && map[y][x + 1] == 0) {
		map[y][x + 1] = '1';
		DFS(y, x + 1);
	}
	if (x - 1 >= 0 && map[y][x - 1] == 0) {
		map[y][x - 1] = '1';
		DFS(y, x - 1);
	}
}
int main()
{
	scanf("%d %d %d", &M, &N, &K);
	for (int i = 0; i < K; i++) {
		int x1, x2, y1, y2, temp;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				map[k][j] = '1';
			}
		}
	}
	cnt = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 0) {
				map[i][j] = '1';
				DFS(i,j);
				area.push_back(cnt);
				cnt = 0;
			}
		}
	}
	printf("%d\n", area.size());
	if (!area.empty()) {
		sort(area.begin(), area.end());
		for (int i = 0; i < area.size() - 1; i++)
			printf("%d ", area.at(i));
		printf("%d", area.back());
	}
	else
		printf("0");
}