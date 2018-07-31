#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<int> q;
	int N, M;
	scanf("%d %d", &N, &M);
	printf("<");
	for (int i = 0; i < N; i++)
		q.push(i + 1);
	while (q.size()>1) {
		for (int i = 0; i < M-1; i++) {
			int x = q.front();
			q.pop();
			q.push(x);
		}
		printf("%d, ", q.front());
		q.pop();
	}
	printf("%d>", q.front());
	q.pop();
}