#include <cstdio>
int main()
{
	int N, ans = 0;
	scanf("%d", &N);
	if (N == 1)
		printf("5");
	else {
		ans += 5 * N;
		for (int i = 1; i < N; i++) {
			if (2 + (i - 1) * 3 >= 45678)
				ans += (2 + (i - 1) * 3) % 45678;
			else
				ans += 2 + (i - 1) * 3;
			if (ans >= 45678)
				ans = ans % 45678;
		}
		printf("%d", ans);
	}
}