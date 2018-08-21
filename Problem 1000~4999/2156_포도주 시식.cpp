#include <cstdio>
using namespace std;
int num[10000] = { 0 }, N, max[10000];
int main() {
	int one, two, ans;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
	max[0] = num[0];
	max[1] = num[0] + num[1];
	ans = (max[0] > max[1]) ? max[0] : max[1];
	for (int i = 2; i < N; i++) {
		for (int j = i - 2; j >= 0; j--) {
			if (max[j] > max[i - 2])
				max[i - 2] = max[j];
		}
		one = max[i - 2] + num[i];
		if (i >= 3) {
			for (int j = i - 3; j >= 0; j--) {
				if (max[j] > max[i - 3])
					max[i - 3] = max[j];
			}
		two = max[i - 3] + num[i - 1] + num[i];
		}
		else
			two = num[i - 1] + num[i];
		max[i] = (one > two) ? one : two;
		if (ans < max[i])
			ans = max[i];
	}
	printf("%d", ans);
}