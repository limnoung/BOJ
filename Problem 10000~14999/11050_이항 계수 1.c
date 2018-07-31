#include <stdio.h>
int combination(int N, int K){
	static int C[10][10] = { 0 };
	if (K == 0 || N==K)
		return 1;
	if (C[N - 1][K - 1] != 0)
		return C[N - 1][K - 1];
	else
		return C[N - 1][K - 1] = combination(N - 1, K - 1) + combination(N - 1, K);
}
int main(){
	int N, K;
	scanf("%d %d", &N, &K);
	printf("%d", combination(N, K));
}