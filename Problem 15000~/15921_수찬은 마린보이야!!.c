#include <stdio.h>
#include <math.h>
int main()
{
	int N, temp;
	float avg = 0, ev = 0;
	scanf("%d", &N);
	if (N == 0)
		printf("divide by zero");
	else {
		for (int i = 0; i < N; i++) {
			scanf("%d", &temp);
			avg += temp;
			ev += ((float)temp / N);
		}
		printf("%.2f", floor((avg/N) / ev + 0.005));
	}
}