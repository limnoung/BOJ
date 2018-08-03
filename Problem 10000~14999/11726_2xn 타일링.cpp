#include <stdio.h>
int main()
{
	int n, sum, one, two;
	scanf("%d", &n);
	one = 0;
	two = 1;
	for (int i = 1; i <= n; i++) {
		sum = (one + two) % 10007;
		one = two;
		two = sum;
	}
	printf("%d", sum);
}