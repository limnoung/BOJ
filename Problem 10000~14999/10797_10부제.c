#include <stdio.h>
int main() {
	int N, Car[5], count=0;
	scanf("%d", &N);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &Car[i]);
		if (Car[i] == N)
			count++;
	}
	printf("%d", count);
}