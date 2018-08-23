#include <cstdio>
int main()
{
	const int base[9] = { 1,10,100,1000,10000,100000,1000000,10000000,100000000 };
	int count = 0, N, i;
	scanf("%d", &N);
	if (N < 10)
		printf("%d", N);
	else {
		for (i = 0; i < 9; i++) {
			if (base[i] > N)
				break;
		}
		for (int j = 0; j < i - 1; j++)
			count += (base[j + 1] - base[j])*(j + 1);
		count += (N - base[i - 1]+1)*i;
		printf("%d", count);
	}
}