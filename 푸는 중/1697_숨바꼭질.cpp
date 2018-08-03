#include <iostream>
#include <queue>
using namespace std;
typedef struct {
	int num;
	int method;
	int index;
}N;
void BFS(int i, int index) {
	queue<N> q;
	N temp = { i - 1,-1,++index };
	q.push(temp);
	N temp = { i + 1,1,index};
	q.push(temp);
	while (!q.empty()) {
		int num = q.front().num;
		int method = q.front().method;
		int index = q.front().index;
		q.pop();
		index++;
		if (method == -1) {
			N temp = { i - 1,-1,index };
			q.push(temp);
			if (num % 2 == 0) {
				N temp = { i / 2,2,index };
				q.push(temp);
			}
		}
		else if (method == 1) {
			q.push(make_pair(i + 1, 1));
			if (x % 2 == 0)
				q.push(make_pair(i / 2, 2));			
		}
		else if (y == 2) {
			q.push(make_pair(i - 1, -1));
			q.push(make_pair(i + 1, 1));
			if (x % 2 == 0) 
				q.push(make_pair(i / 2, 2));
		}
	}
}
int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	BFS(K,0);
}
