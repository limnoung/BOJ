#include <cstdio>
int main()
{
	char count[42] = { 0 };
	int ans = 0;
	for (int i = 0; i < 10; i++) {
		int a;
		scanf("%d", &a);
		if (count[a % 42] == 0) {
			count[a % 42]++;
			ans++;
		}
	}
	printf("%d", ans);
}