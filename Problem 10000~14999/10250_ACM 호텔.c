#include <stdio.h>

int main() {
	int T, H, W, N;
	int X, Y;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		X = 1; Y = 0;
		scanf("%d %d %d", &H, &W,&N);
		while (N > H) {
			N -= H;
			X++;
		}
		if (N == 0)
			Y++;
		for (int j = N; j > 0; j--)
			Y++;
		printf("%d", Y);
		if (X < 10)
			printf("0%d", X);
		else
			printf("%d", X);
		printf("\n");
	}
}
