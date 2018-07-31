#include <iostream>
#include <queue>
using namespace std;
int map[300][300] = { 0 };
int l, i, j, Min = -1;
void BFS(int i,int j) {
	int Count=0, size=1, Move = 0;
	queue<pair<int, int>>a;
	a.push(make_pair(i, j));
	while (!a.empty()) {
		int x = a.front().first;
		int y = a.front().second;
		if (x == i && y == j && Min>map[x][y]) {
			Min = map[x][y];
		}
		a.pop();
		size--;
		if (map[x][y] == -1 || map[x][y] > Move) {
			map[x][y] = Move;
			if (Min == -1 || (Min != -1 && Move < Min)) {
				if (y - 2 >= 0) {
					if (x - 1 >= 0) {
						if (map[x - 1][y - 2] == -1 || map[x - 1][y - 2] > Move) {
							a.push(make_pair(x - 1, y - 2));
							Count++;
						}
					}
					if (x + 1 < l) {
						if (map[x + 1][y - 2] == -1 || map[x + 1][y - 2] > Move) {
							a.push(make_pair(x + 1, y - 2));
							Count++;
						}
					}
				}
				if (y - 1 >= 0) {
					if (x - 2 >= 0) {
						if (map[x - 2][y - 1] == -1 || map[x - 2][y - 1] > Move) {
							a.push(make_pair(x - 2, y - 1));
							Count++;
						}
					}
					if (x + 2 < l) {
						if (map[x + 2][y - 1] == -1 || map[x + 2][y - 1] > Move) {
							a.push(make_pair(x + 2, y - 1));
							Count++;
						}
					}
				}
				if (y + 1 < l) {
					if (x - 2 >= 0) {
						if (map[x - 2][y + 1] == -1 || map[x - 2][y + 1] > Move) {
							a.push(make_pair(x - 2, y + 1));
							Count++;
						}
					}
					if (x + 2 < l) {
						if (map[x + 2][y + 1] == -1 || map[x + 2][y + 1] > Move) {
							a.push(make_pair(x + 2, y + 1));
							Count++;
						}
					}
				}
				if (y + 2 < l) {
					if (x - 1 >= 0) {
						if (map[x - 1][y + 2] == -1 || map[x - 1][y + 2] > Move) {
							a.push(make_pair(x - 1, y + 2));
							Count++;
						}
					}
					if (x + 1 < l) {
						if (map[x + 1][y + 2] == -1 || map[x + 1][y + 2] > Move) {
							a.push(make_pair(x + 1, y + 2));
							Count++;
						}
					}
				}
			}
		}
		if (size == 0) {
			size = Count;
			Move++;
			Count = 0;
		}
	}
}
int main() {
	int T, a, b;
	scanf("%d", &T);
	while (T) {
		for (int i = 0; i < 300; i++) {
			for (int j = 0; j < 300; j++) {
				map[i][j] = -1;
			}
		}
		T--;
		scanf("%d", &l);
		scanf("%d %d %d %d", &a, &b,&i,&j);
		BFS(a, b);
		printf("%d\n", map[i][j]);
	}
}