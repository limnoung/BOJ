#include <stdio.h>

int main() {
	int N, Score[1000], Max;
	double Ans;
	Max = 0; Ans = 0; 
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &Score[i]);
		if (Score[i] > Max)
			Max = Score[i];
	}
	for (int i = 0; i < N; i++)
		Ans += (double)100 / Max * Score[i];
	Ans /= (double)N;
	printf("%.2lf", Ans);
	
}