#include <iostream>
#include <queue>
using namespace std;
int N, M, V;
int way[1005][1005] = { 0 };
int visit[1005] = { 0 };
void BFS(int V)
{
	  queue<int> q;
	  int temp;
	  q.push(V);
	  visit[V] = 1;
	  while (!q.empty()) {
			temp = q.front();
			printf("%d ", temp);
			q.pop();
			for (int i = 1; i <= N; i++) {
				  if (way[temp][i] && !visit[i]) {
						visit[i] = 1;
						q.push(i);
				  }
			}
	  }
}
void DFS(int V)
{
	  visit[V] = 1;
	  printf("%d ", V);
	  for (int i = 1; i <= N; i++) {
			if (way[V][i] && !visit[i])
				  DFS(i);
	  }
}

int main() {

	  scanf("%d %d %d", &N, &M, &V);
	  for (int i = 0; i<M; i++) {
			int a, b;
			scanf("%d %d", &a, &b);
			way[a][b] = way[b][a] = 1;
	  }
	  DFS(V);
	  printf("\n");
	  for (int i = 1; i<=N; i++)
			visit[i] = 0;
	  BFS(V);
	  return 0;
}
