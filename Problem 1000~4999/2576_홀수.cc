#include <cstdio>
int main()
{
	int N, min = 100, sum = 0, count = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &N);
		if (N % 2 == 1) {
			count = 1;
			sum += N;
			if (min > N)
				min = N;
		}
	}
	if (count == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
}