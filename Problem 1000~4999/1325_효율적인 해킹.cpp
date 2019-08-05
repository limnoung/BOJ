#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
vector<int> ch[10001];
int check[10001] = { 0 };
int BFS(int i) {
	int ans = 0;
	queue<int> q;
	q.push(i);
	check[i] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		ans++;
		for (int j = 0; j < ch[x].size(); j++) {
			if (check[ch[x][j]] == 0) {
				q.push(ch[x][j]);
				check[ch[x][j]] = 1;
			}
		}
	}
	return ans;
}
int main() {
	int N, M, max = 0;
	vector<int> m;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		int j, k, index;
		scanf("%d %d", &j, &k);
		ch[k].push_back(j);
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			check[j] = 0;
		int current = BFS(i);
		if (max < current) {
			m.clear();
			m.push_back(i);
			max = current;
		}
		else if (max == current)
			m.push_back(i);
	}
	for (int i = 0; i < m.size(); i++)
		printf("%d ", m[i]);
}