#include <stdio.h>
int main() {
	int A, B, T, Num;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d%d", &A, &B);
		Num = (A < B) ? A : B;
		for (int j = Num; j >= 1; j--) {
			if (A%j == 0 && B%j == 0) {
				A /= j;
				B /= j;
				Num = j*A*B;
				break;
			}	
		}
		printf("%d\n", Num);
	}
}