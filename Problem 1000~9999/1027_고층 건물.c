#include <stdio.h>

int main()
{
	int N, h[51], l[51], i, j,Max2;
	double Max = 0 , Maxold;
	scanf("%d", &N);
	for (i = 1; i <= N; i++){
		scanf("%d", &h[i]);
		l[i] = 0;
	}
	h[0] = 0;

		for (i = 1; i <= N; i++){
			Max = (double)(h[i] - h[i - 1]);
			for (j = i - 1; j > 0; j--){
				if (j == i - 1)
					l[i]++;
				Maxold = Max;
				Max = (double)(h[i] - h[j]) / (i - j);
				if (Max < Maxold){
					l[i] = l[i] + 1;
				}
				else
					Max = Maxold;
			}
			Max = (double)(h[i + 1] - h[i]);

			for (j = i + 1; j <= N; j++){
				if (j == i + 1)
					l[i]++;
				Maxold = Max;
				Max = (double)(h[j] - h[i]) / (j - i);
				if (Max > Maxold){
					l[i] = l[i] + 1;
				}
				else
					Max = Maxold;
			}
		}
		Max2 = 1;
		for (i = 1; i < N; i++){
			if (l[Max2] < l[i + 1]){
				Max2 = i + 1;
			}
		}
		printf("%d", l[Max2]);
}
