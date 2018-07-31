#include <stdio.h>
int main()
{
	  int N, K, count = 0;
	  int current[10] = { 0 };
	  scanf("%d %d", &N, &K);
	  for (int i = 0; i < N; i++)
			scanf("%d", &current[i]);
	  for (int i = N-1; i >= 0; i--) {
			if (current[i] <= K) {
				  while (K - current[i] >= 0) {
						count++;
						K -= current[i];
				  }
			}
	  }
	  printf("%d", count);
}