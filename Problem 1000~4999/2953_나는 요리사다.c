#include <stdio.h>
int main() {
	int score[4], max=0, num, sc;
	for (int i = 1; i <= 5; i++) {
		sc = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[j]);
			sc += score[j];
		}
		if (max < sc) {
			num = i;
			max = sc;
		}
	}
	printf("%d %d", num, max);
}