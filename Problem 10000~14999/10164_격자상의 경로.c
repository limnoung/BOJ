#include <stdio.h>
int ki, kj, Ans=0;
int cal(int i, int j)
{
	if (i > ki || j > kj)
		return 0;
	if (i == ki && j == kj) {
		return Ans++;
	}
	if (i < ki)
		cal(i + 1, j);
	if (j < kj)
		cal(i, j + 1);
}
int main() {
	int K, temp = 0, N, M;
	scanf("%d %d %d", &N, &M, &K);
	if (K%M != 0) {
		ki = K / M + 1;
		kj = K % M;
	}
	else {
		ki = K / M;
		kj = M;
	}

	if (K == 0) {
		ki = N;
		kj = M;
		cal(1, 1);
	}
	else {
		cal(1, 1);
		temp = Ans;
		Ans = 0;
		ki = N;
		kj = M;
		cal((K%M != 0) ? K/M+1 : K/M, (K%M!=0)?K%M:M);
		Ans = Ans * temp;
	}
	printf("%d", Ans);
}