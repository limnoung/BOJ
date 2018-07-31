#include <stdio.h>
int arr[500][500] = { 0 };
int Max(int a, int b) {
	return (a > b) ? a : b;
}
int main() {
	int N, max = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <=i ; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 1; i < N; i++) {
		arr[i][0] += arr[i - 1][0];
		arr[i][i] += arr[i - 1][i-1];
	}
	for (int i = 1; i < N; i++) {
		for (int j = 1; j < i; j++) {
			arr[i][j] += Max(arr[i - 1][j - 1], arr[i-1][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		if (max < arr[N - 1][i])
			max = arr[N - 1][i];
	}
	printf("%d", max);
}