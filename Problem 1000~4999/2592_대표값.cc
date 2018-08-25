#include <cstdio>
int main()
{
	int N[100] = { 0 }, sum = 0, base;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &base);
		sum += base;
		N[base / 10 - 1]++;
	}
	base = 0;
	for (int i = 1; i < 100; i++) {
		if (N[i] > N[base])
			base = i;
	}
	printf("%d\n%d", sum / 10, (base+1)*10);
}