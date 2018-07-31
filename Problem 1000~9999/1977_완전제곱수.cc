#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	  int M, N;
	  int Min = 100000, sum = 0;
	  scanf("%d %d", &M, &N);
	  for (int i = M; i <= N; i++){
			for (int j = 1; j <= 100; j++) {
				  if (j*j > i)
						break;
				  while (j*j < i)
						j++;
				  if (i == j*j) {
						sum += j*j;
						Min = min(Min, i);
				  }
			}
	  }
	  if (Min == 100000)
			printf("-1");
	  else
			printf("%d\n%d", sum, Min);
}