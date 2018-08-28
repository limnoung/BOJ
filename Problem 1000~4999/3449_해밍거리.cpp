#include <cstdio>
int main()
{
	int N;
	scanf("%d", &N);
	getchar();
	while (N) {
		N--;
		int ans = 0;
		char a[101], b[101];
		fgets(a, 100, stdin);
		fgets(b, 100, stdin);
		for (int i = 0; a[i] != 10; i++) 
			if (a[i] != b[i])
				ans++;
		printf("Hamming distance is %d.\n", ans);
	}

}