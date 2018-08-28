#include <cstdio>
int main()
{
	int N;
	scanf("%d", &N);
	getchar();
	while (N) {
		char count[26] = { 0 }, c;
		int ans = 0;
		while ((c = getchar()) != '\n') {
			if (count[c - 'A'] == 0)
				count[c - 'A'] = 1;
		}
		for (int i = 0; i < 26; i++) {
			if (count[i] == 0)
				ans += (i + 65);
		}
		printf("%d\n", ans);
		N--;
	}

}