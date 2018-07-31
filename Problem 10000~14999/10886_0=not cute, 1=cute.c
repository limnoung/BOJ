#include <stdio.h>
int main() {
	int N, temp, count = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		if (temp == 1)
			count++;
		else
			count--;
	}
	printf("%s", (count > 0) ? "Junhee is cute!" : "Junhee is not cute!");
}