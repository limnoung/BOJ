#include <stdio.h>
long long int Ans(int N){
	static long long int n[80] = { 0 };
	if (N == 1)
		return 4;
	else if (N == 2)
		return 6;
	else{
		if (n[N - 1] != 0)
			return n[N - 1];
		else
			return n[N-1]=Ans(N - 1) + Ans(N - 2);
	}
}
int main(){
	int N;
	scanf("%d", &N);
	printf("%lld", Ans(N));
}