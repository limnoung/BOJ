#include <cstdio>
#include <queue>
using namespace std;
int main()
{
	int N, num[1000][2] = { 0 };
	int max = 0;
	queue<pair<int,int>> q;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i][0]);
	}
	for (int i = 0; i < N-max; i++) {
		q.push(make_pair(i,1));
		if(num[i][1]==0)
			num[i][1] = 1;
		while (!q.empty()) {
			int x = q.front().first;
			int count = q.front().second;
			if (max < count)
				max = count;
			q.pop();
			count++;
			for (int j = x+1; j < N; j++) {
				if (num[x][0] < num[j][0] && count > num[j][1]) {
					q.push(make_pair(j, count));
					num[j][1] = count ;
				}
			}
		}
	}
	printf("%d", max);
}