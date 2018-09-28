#include <cstdio>
#include <cmath>
static int num[100001] = { 0,1,2,3,0 };
int knapsack(int i) {
	int index = 0, ans;
	float base = sqrt(i);

	if ((int)base*base == i)
		return num[i] = 1;
	else if (num[i] > 0)
		return num[i];
	else {
		if (num[i - 1] > 0)
			ans = num[i - 1] + 1;
		else
			ans = knapsack(i - 1) + 1;
		for (index = base; index >= 1; index--) {
			int n = i;
			int count = knapsack(n - (index*index));
			if (ans > count + 1)
				ans = count + 1;
		}
		return num[i] = ans;
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d",knapsack(N));
}