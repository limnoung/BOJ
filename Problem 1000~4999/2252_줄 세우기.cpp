#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main(){
	int N, M, degree[32001] = { 0 };
	queue<int> q;
	vector<int> dest[32001];
	vector<int> ans;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		degree[b]++;
		dest[a].push_back(b);
	}
	for (int i = 1; i <= N; i++) {
		if (degree[i] == 0) {
			degree[i] = -1;
			q.push(i);
			ans.push_back(i);
		}
		while (!q.empty()) {
			int x = q.front();
			q.pop();
			for (int i = 0; i < dest[x].size(); i++) {
				int des = dest[x][i];
				if(degree[des]>=1)
					degree[des]--;
				if (degree[des] == 0) {
					degree[des] = -1;
					q.push(des);
					ans.push_back(des);
				}
			}
		}
	}
	for (int i = 0; i < ans.size(); i++) 
		printf("%d ", ans[i]);
	
}