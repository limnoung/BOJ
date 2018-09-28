#include <cstdio>
int main()
{
	int N, temp, size = 0, base = 0;
	scanf("%d", &N);
	temp = N;
	while (temp != 0) {
		temp /= 10;
		size++;
	}
	base = size;
	/*for (int i = N - (base*9);i<N-(base) ; i++) {
		int sum = 0;
		temp = i;
		while (temp != 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (N - i - sum == 0) {
			printf("%d", i);
			return 0;
		}
	}*/
	for (int i = N / 2; i < N; i++) {
		int sum = 0;
		temp = i;
		while (temp != 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (N - i - sum == 0) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}