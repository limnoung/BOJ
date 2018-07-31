#include <stdio.h>
int main() {
	int N[9], index=0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &N[i]);
		getchar();
		if (N[i] > N[index])
			index = i;
	}
	printf("%d\n%d", N[index], index + 1);
}