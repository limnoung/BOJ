#include <cstdio>
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", (N - 1) * (N - 2) * (N - 3) * N / 24);
}