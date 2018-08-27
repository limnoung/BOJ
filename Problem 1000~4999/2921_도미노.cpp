#include <cstdio>
int main()
{
	int N, ans = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		ans += i * (i + 1);
		for (int j = 1; j <= i; j++)
			ans += j;
	}
	printf("%d", ans);
}