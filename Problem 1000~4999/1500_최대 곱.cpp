#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int S, K;
	long long int ans = 1;
	scanf("%d %d", &S, &K);
	if (K%S == 0) {
		ans = (long long int)pow((int)K / S, K);
	}
	else {
		int a, b;
		a = S; b = K;
		while (a != 0) {
			ans *= a / b;
			a -= (a/b);
			b--;
		}
	}
	printf("%lld", ans);
}
