#include <stdio.h>
int main() {
	int T, X, Ans = 0;
	int count[10];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		Ans = 0;
		for (int j = 0; j <= 9; j++)
			count[j] = 0;
		scanf("%d", &X);
		if (X < 10) {
			printf("1\n");
		}
		else {
			while (X != 0) {
				count[X % 10]++;
				X /= 10;
			}
			for (int i = 0; i <= 9; i++) {
				if (count[i] >= 1) {
					Ans++;
				}
			}
			printf("%d\n", Ans);
		}
	}
}