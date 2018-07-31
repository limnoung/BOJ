#include <iostream>
using namespace std;
int main()
{
	  int T, k, n;
	  unsigned long long int arr[15][15];
	  scanf("%d", &T);
	  while (T > 0) {
			scanf("%d %d", &k, &n);
			for (int i = 0; i < 15; i++)
				  for (int j = 0; j < 15; j++)
						arr[i][j] = 0;
			if (n == 1)
				  printf("1\n");
			else {
				  for (int i = 0; i <= k; i++) {
						for (int j = 0; j < n; j++) {
							  if (i == 0)
									arr[i][j] = j + 1;
							  else if (j == 0)
									arr[i][j] = 1;
							  else {
									for (int m = j; m >= 0; m--) {
										  arr[i][j] += arr[i - 1][m];
									}
							  }
						}
				  }
				  printf("%d\n", arr[k][n - 1]);
			}
			T--;
	  }
}