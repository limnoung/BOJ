#include <stdio.h>
int main()
{
	char seat[100] = { 0 };
	int N, temp, count = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		if (temp < 1 || temp>100)
			count++;
		else {
			if (seat[temp] == 0)
				seat[temp] = 1;
			else
				count++;
		}
	}
	printf("%d", count);
}