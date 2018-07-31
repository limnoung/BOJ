#include <stdio.h>
int main(int a, int b) {
	int T, Index = 1;
	scanf("%d", &T);
	while (T) {
		T--;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n",Index++, a + b);
	}
}