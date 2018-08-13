#include <iostream>
#include <queue>
#define swap(x,y){int t; t=x; x=y; y=t;}
using namespace std;
int visit[100001] = { 0 };
int N, K, Min = 200000;
void BFS(int i) {
	queue<int> q;
	q.push(i);
	visit[i] = 1;
	while (!q.empty()) {
		int x = q.front();
		int index = visit[x];
		q.pop();
		if (x == N) {
			 if (Min > index-1){
				Min = index-1;
			}
		}
		else if(++index < Min){
			if (x>0 && (visit[x - 1] == 0 || visit[x - 1] >= index)) {
				q.push(x - 1);
				visit[x - 1] = index;
			}
			if (visit[x + 1] == 0 || visit[x + 1] >= index) {
				q.push(x + 1);
				visit[x + 1] = index;
			}
			if (x % 2 == 0 && x > 0) {
				if (visit[x / 2] == 0 || visit[x / 2] >= index) {
					q.push(x / 2);
					visit[x / 2] = index;
				}
			}
		}
	}
}
int main() {
	scanf("%d %d", &N, &K);
	if (N == K)
		printf("0");
	else
	{
		BFS(K);
		printf("%d", Min);
	}
}