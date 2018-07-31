#include <stdio.h>
int main() {
	int A, B;
	while (1) {
		scanf("%d %d", &A, &B);
		if (A != 0 || B != 0)
			printf("%d\n", A + B);
		else
			return 0;
	}
}