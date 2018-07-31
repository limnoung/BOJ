#include <stdio.h>
long long num(int n) {
	static long long save[90];
	if (save[n] > 0)
		return save[n];
	if (n < 0)
		return 0;
	if (n <= 2)
		return 1;
	else
		return save[n] = num(n-1) + num(n - 2);
}
int main() {
	int N;
	scanf("%d", &N);
	printf("%lld", num(N));
}