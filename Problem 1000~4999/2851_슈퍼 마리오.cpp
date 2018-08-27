#include <cstdio>
#include <cmath>
int main()
{
	int num, sum = 0, base = 100, ans = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		sum += num;
		if (abs(100 - sum) <= base) {
			base = abs(100 - sum);
			if(sum > ans)
				ans = sum;
		}
	}
	printf("%d", ans);
}