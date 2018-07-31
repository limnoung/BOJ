#include <stdio.h>

int main() {
	int C, Test[1001],count, index;
	double Avg;
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		Avg = 0; count = 0; index = 0;
		scanf("%d", &Test[0]);
		for (int j = 0; j < Test[0]; j++) {
			scanf("%d", &Test[j + 1]);
			Avg += Test[j + 1];
		}
		Avg /= Test[0];
		for (int j = 0; j < Test[0]; j++) {
			if (Avg < Test[j+1])
				count++;
		}
		printf("%.3lf%%\n", (double)count * 100 / Test[0]);
	}
}