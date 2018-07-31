#include <iostream>
#include <deque>
#define Min(a,b) (a>b)?b:a
using namespace std;
int N, M;
deque<short> d;
int main()
{
	int temp, before = 0, pos, Ans = 0;
	int left, right;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
		d.push_back(i);
	for (int i = 0; i < M; i++) {
		left = right = 0;
		scanf("%d", &temp);
		if (before >= N - i)
			before = 0;
		//left
		for (pos = before; pos >= 0; pos--) {
			if (d.at(pos) != temp) {
				left++;
				if (pos == 0)
					pos = N-i;
			}
			else
				break;
		}
		//right
		for (pos = before; pos < N-i; pos++) {
			if (d.at(pos) != temp) {
				right++;
				if (pos == N-i - 1)
					pos = -1;
			}
			else
				break;
		}
		d.erase(d.begin() + pos);
		before = pos;
		Ans += Min(left, right);
	}
	printf("%d", Ans);
}