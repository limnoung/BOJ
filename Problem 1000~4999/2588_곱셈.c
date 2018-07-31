#include <stdio.h>
int main() {
	int A, B,temp;
	scanf("%d%d", &A, &B);
	temp = B;
	for (int i = 0; i < 3; i++) {
		printf("%d\n", A*(B % 10));
		B = B / 10;
	}
	printf("%d", A*temp);
}