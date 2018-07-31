#include <stdio.h>
int main()
{
	int N, count, Ans = 0;
	scanf("%d", &N);
	for (int i = 0; i <= N; i++){
		count = 0;
		if (i % 125 == 0 && i>=125)
			count++;
		if (i % 25 == 0 && i>=25)
			count++;
		if (i % 5 == 0 && i>=5)
			count++;
		if (count!=0)
			Ans += count;
	}
	printf("%d", Ans);
}