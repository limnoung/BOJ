#include <stdio.h>
int main()
{
	int M, Ans = 1;
	int a, b;
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		if (a == Ans)
			Ans = b;
		else if (b == Ans) 
			Ans = a;
	}
	printf("%d", Ans);
}