#include <stdio.h>
int main() {
	long long F[91] = { 0,1 };
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
		F[i] = F[i - 1] + F[i - 2];
	printf("%lld", F[n]);
}