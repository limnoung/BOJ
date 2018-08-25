#include <cstdio>
int main()
{
	int N, max[3] = { 0 };
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			scanf("%d", &N);
			if (N > max[0]) {
				max[0] = N;
				max[1] = i;
				max[2] = j;
			}
		}
	}
	printf("%d\n%d %d", max[0], max[1], max[2]);
}