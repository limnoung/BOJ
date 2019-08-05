#include <cstdio>
#include <queue>
using namespace std;
int main() {
	int T;
	scanf("%d", &T);
	while (T) {
		T--;
		int N, P[1001] = { 0 }, cycle = 0, check[1001] = { 0 };
		queue<int> q;
		scanf("%d", &N);
		for (int i = 1; i <= N; i++) {
			int t;
			scanf("%d", &t);
			P[i] = t;
		}
		for (int i = 1; i <= N; i++) {
			if (check[i] == 1)
				continue;
			else {
				cycle++;
				check[i] = 1;
				q.push(P[i]);
				while (!q.empty()) {
					int x = q.front();
					q.pop();
					if (check[x] == 0) {
						check[x] = 1;
						q.push(P[x]);
					}
				}
			}
		}
		printf("%d\n", cycle);
	}
}