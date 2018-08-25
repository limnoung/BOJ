#include <cstdio>
int main()
{
	int N, count, score = 0;;
	scanf("%d", &N);
	count = 0;
	for (int i = 0; i < N; i++) {
		int t;
		scanf("%d", &t);
		if (t == 0)
			count = 0;
		else if (t == 1)
			count++;
		score += count;
	}
	printf("%d", score);
}