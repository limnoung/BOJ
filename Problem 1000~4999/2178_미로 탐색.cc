#include <stdio.h>
#include <queue>
using namespace std;
#define MIN(a,b) (a>b)?b:a
int N, M;
int maze[101][101] = { 0 };
const int dx[] = { -1,1,0,0 };
const int dy[] = { 0,0,1,-1 };
void BFS(int x, int y) {
	  queue<pair<int, int>>q;
	  q.push(make_pair(x, y));
	  while (!q.empty()) {
			x = q.front().first;
			y = q.front().second;
			q.pop();
			for (int k = 0; k < 4; k++) {
				  int nx = x + dx[k];
				  int ny = y + dy[k];
				  if (nx<0 || nx>N - 1 || ny<0 || ny>M - 1) continue;
				  if (maze[nx][ny] == 1) {
						q.push(make_pair(nx, ny));
						maze[nx][ny] = maze[x][y] + 1;
				  }
			}
	  }
}
int main()
{
	  scanf("%d %d", &N, &M);
	  for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				  scanf("%1d", &maze[i][j]);
			}
			getchar();
	  }
	  maze[0][0] = 2;
	  BFS(0, 0);
	  printf("%d", maze[N-1][M-1]-1);
}