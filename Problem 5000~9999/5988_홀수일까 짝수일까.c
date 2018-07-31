#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	while (N) {
		char num[65];
		int i = 0;
		N--;
		scanf("%s", num);
		while (num[i] >= '0' && num[i] <= '9') { i++; }
		i--;
		if ((num[i] - '0') % 2 == 1)
			printf("odd\n");
		else
			printf("even\n");
	}
}