#include <cstdio>
#include <cmath>
int main()
{
	int N;
	scanf("%d", &N);
	while (N) {
		char number[9];
		int base = 1, left = 0, right = 0;
		N--;
		scanf("%s", number);
		for (int i = 2; i >= 0; i--) {
			left += (number[i] - 65)*base;
			base *= 26;
		}
		base = 1;
		for (int i = 7; i >= 4; i--) {
			right += (number[i] - 48)*base;
			base *= 10;
		}
		if (abs(left - right) <= 100)
			printf("nice\n");
		else
			printf("not nice\n");
	}
}