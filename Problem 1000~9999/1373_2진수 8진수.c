#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000001];
	int sum=0, base = 4, size;
	scanf("%s", a);

	size = strlen(a);
	if (size % 3 != 0) {
		if (size % 3 == 1)
			base = 1;
		else if (size % 3 == 2)
			base = 2;
		for (int i = 0; i < size % 3; i++) {
			sum += base * (a[i] - '0');
			base /= 2;
		}
		printf("%d", sum);
	}
	for (int i = size % 3; i < size; i += 3) {
		base = 4;
		sum = 0;
		for (int j = i; j < i + 3; j++) {
			sum += base * (a[j] - '0');
			base /= 2;
		}
		printf("%d", sum);
	}
}