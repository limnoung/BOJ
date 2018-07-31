#include <stdio.h>
int main(){
	int step[300], N, max[300];
	int One, Two;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &step[i]);
	}
	max[0] = step[0];
	max[1] = step[1] + step[0];
	for (int i = 2; i < N; i++) {
		One = max[i - 2] + step[i];
		if (i >= 3)
			Two = max[i - 3] + step[i - 1] + step[i];
		else
			Two = step[i - 1] + step[i];
		max[i] = (One > Two) ? One : Two;
	}
	printf("%d", max[N - 1]);
}