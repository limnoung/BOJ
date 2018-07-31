#include <stdio.h>
#include <math.h>
int main() {
	int a, b;
	int temp = 0; int index = 2;
	scanf("%d %d", &a, &b);
	while (a!=0) {
		temp += a % 10 * pow(10, index);
		a /= 10;
		index--;
	}
	a = temp;
	temp = 0;
	index = 2;
	while (b != 0) {
		temp += b % 10 * pow(10, index);
		b /= 10;
		index--;
	}
	b = temp;
	printf("%d", (a > b) ? a : b);
}
