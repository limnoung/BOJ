#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int A, B;
	long long int min, max;
	long long int ans, size;
	scanf("%d %d", &A, &B);
	min = (A > B) ? B : A;
	max = (A > B) ? A : B;
	if (min == max)
		ans = A;
	else if (min*-1 == max)
		ans = 0;
	else if (min < 0 && max>0) {
		if (min*-1 > max)
			max = (max + 1)*-1;
		else
			min = (min*-1) + 1;
	}
	size = max - min + 1;
	if (size % 2 == 1)
		ans = (long long int)(max + min)*(size / 2) + (long long int)(max + min) / 2;
	else
		ans = (long long int)(max + min)*(size / 2);

	printf("%lld", ans);
}
