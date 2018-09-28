#include <cstdio>
int main()
{
	int T;
	scanf("%d", &T);
	while (T) {
		int map[100][100] = { 0 };
		int Ans = 0, m, n;
		T--;
		scanf("%d %d", &m, &n);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &map[i][j]);
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] == 1) {
					for (int k = i + 1; k < m; k++)
						if (map[k][j] == 0)
							Ans++;
				}
			}
		}
		printf("%d\n", Ans);
	}
}