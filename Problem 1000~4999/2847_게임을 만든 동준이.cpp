#include <cstdio>
#include <cmath>
int main()
{
	int N, arr[101] = { 0 }, ans = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) 
		scanf("%d", &arr[i]);
	for (int i = N - 1; i > 0; i--) {
		if (arr[i - 1] >= arr[i]) {
			ans += abs(arr[i - 1] - (arr[i] - 1));
			arr[i - 1] = arr[i] - 1;
		}
	}
	printf("%d", ans);
}