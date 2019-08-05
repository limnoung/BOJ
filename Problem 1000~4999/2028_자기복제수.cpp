#include <cstdio>
#include <cstdlib>
int main()
{
	char num[9] = { 0 };
	int N, T;
	scanf("%d", &T);
	getchar();
	while (T) {
		int index = 0;
		T--;
		scanf("%s", &num);
		for (index = 0; index < 10; index++) {
			if (num[index] == 0)
				break;
		}
		index--;
		N = atoi(num);
		N *= N;
		while (index >= 0) {
			if (num[index] - '0' != (N % 10))
				break;
			N /= 10;
			index--;
		}
		if (index < 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}