#include <stdio.h>
int main() {
	int Score[5], Avg=0;
	for (int i = 0; i<5; i++) {
		scanf("%d", &Score[i]);
		if (Score[i] < 40)
			Score[i] = 40;
		Avg += Score[i];
	}
	Avg /= 5;
	printf("%d", Avg);
}