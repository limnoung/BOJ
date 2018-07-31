#include <stdio.h>
int main() {
	int N,Ans;
	char Num[100];
	Ans = 0;
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) 
		scanf("%c", &Num[i]);    
	for (int i = 0; i < N; i++)
		Ans += Num[i] - 48;
	printf("%d", Ans);
}