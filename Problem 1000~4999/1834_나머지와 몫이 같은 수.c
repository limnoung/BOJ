#include <stdio.h>
int main()
{
	int N;
	unsigned long long int sum = 0;
	scanf("%d", &N);
	for (int i = 1; i < N; i++) {
		sum += N * i + i;
	}
	printf("%lld", sum);
}