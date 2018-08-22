#include <cstdio>
#define Max(a,b) (a>b)?a:b
using namespace std;
int main() {
	int N, P[1001] = { 0 }, max[1001] = { 0 };

	scanf("%d", &N);
	for (int i = 1; i <= N; i++) 
		scanf("%d", &P[i]);
	for (int i = 1; i <= N; i++) {
		max[i] = P[i];
		for (int j = i-1; j >= 1; j--) {
			max[i] = Max(max[i], max[j] + max[i - j]);
		}
	}
	printf("%d", max[N]);
}