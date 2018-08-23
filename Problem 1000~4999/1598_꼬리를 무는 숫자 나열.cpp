#include <cstdio>
#include <cmath>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a--; b--;
	printf("%d", abs((b / 4) - (a / 4)) + abs((b % 4) - (a % 4)));
}