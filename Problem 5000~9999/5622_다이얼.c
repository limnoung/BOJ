#include <stdio.h>
int main() {
	char a[20];
	int sum = 0,i=0;
	gets(a);
	while (a[i] != NULL) {
		if (a[i] < 80)
			sum += (a[i] - 56) / 3;
		else if (a[i] < 84)
			sum += 8;
		else if (a[i] < 87)
			sum += 9;
		else
			sum += 10;
		i++;
	}
	printf("%d", sum);
}
