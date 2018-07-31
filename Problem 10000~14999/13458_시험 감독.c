#include <stdio.h>
int a[1000000] = { 0 };
int main()
{
	  int N, b, c;
	  long long sum = 0;
	  scanf("%d",&N);
	  for (int i = 0; i < N; i++) {
			scanf("%d", &a[i]);
	  }
	  scanf("%d %d", &b, &c);
	  for (int i = 0; i < N; i++) {
			if (a[i] - b > 0) {
				  if ((a[i] - b) % c > 0)
						sum += (a[i] - b) / c + 1;
				  else
						sum += (a[i] - b) / c;
			}
			sum++;
	  }
	  printf("%lld", sum);
}