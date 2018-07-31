#include <stdio.h>
#include <string.h>
int main() {
	char num[2][15] = { 0 }, temp[8], sum[15] = { 0 };
	int size_a, size_b, U, index;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%s", temp);
			strcat(num[i], temp);
		}
	}
	size_a = strlen(num[0]) - 1;
	size_b = strlen(num[1]) - 1;
	U = 0, index = 14;
	while (size_a >= 0 || size_b >= 0) {
		sum[index] += U;
		U = 0;
		if (size_a >= 0 && size_b >= 0)
			sum[index] += num[0][size_a--] + num[1][size_b--] - 2 * '0';
		else if (size_a >= 0)
			sum[index] += num[0][size_a--] - '0';
		else if (size_b >= 0)
			sum[index] += num[1][size_b--] - '0';
		if (sum[index] >= 10) {
			U = 1;
			sum[index] -= 10;
		}
		sum[index] += '0';
		index--;
	}
	if (U != 0)
		sum[index--] = U + '0';
	for (int i = index + 1; i < 15; i++) {
		printf("%c", sum[i]);
	}
}