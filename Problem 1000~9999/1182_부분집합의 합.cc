#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	  int N, S;
	  int num = 0, array[20], ans, count = 0;
	  scanf("%d %d", &N,&S);
	  for (int i = 0; i < N; i++)
			scanf("%d", &array[i]);
	  num = (1 << N) - 1;
	  for (int subset = num; subset; subset--) {
			ans = 0;
			for (int i = 0; i < N; i++) {
				  if (subset & (1 << i)) {
						ans += array[i];
				  }
			}
			if (ans == S)
				  count++;
	  }
	  printf("%d", count);
}