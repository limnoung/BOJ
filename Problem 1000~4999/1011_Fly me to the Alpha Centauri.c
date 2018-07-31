#include <stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	while (T) {
		unsigned long long int sum;
		int a, b, dis, i;
		T--;
		scanf("%d %d", &a, &b);
		dis = b - a;

		if (dis <= 3) {
			printf("%d\n", dis);
		}
		else {
			i = 2; sum = 2;
			while (1) {
				sum += i;
				if (dis <= sum) {
					printf("%d\n", (i*2)-1);
					break;
				}
				sum += i;
				if (dis <= sum) {
					printf("%d\n", (i*2));
					break;
				}
				i++;
			}
		}
	}
}