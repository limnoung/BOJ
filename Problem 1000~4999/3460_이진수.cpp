#include <cstdio>
int main()
{
	int N;
	scanf("%d", &N);
	while (N) {
		N--;
		int num, index = -1;
		scanf("%d", &num);
		while (num != 0) {
			index++;
			if (num % 2 == 1)
				printf("%d ", index);
			num /= 2;
		}
		printf("\n");
	}

}