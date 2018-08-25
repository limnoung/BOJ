#include <cstdio>
#define MAX(a,b) (a>b)?a:b
int main()
{
	int N, a, b, c, max = 0, sum = 0;
	scanf("%d", &N);
	while (N) {
		N--;
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c)
			sum = 10000 + a * 1000;
		else if (a != b && b != c && a != c) {
			sum = 100;
			sum *= MAX(MAX(a, b), c);
		}
		else {
			if (a == b || a == c) 
				sum = 1000 + a * 100;
			else if (b == c) 
				sum = 1000 + b * 100;
		}
		if (max < sum)
			max = sum;
	}
	printf("%d", max);
}