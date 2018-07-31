#include <iostream>
#include <cstdlib>
#define SWAP(x,y) {int t; t=x; x=y; y=t;}
using namespace std;
int compare(const void *a, const void *b) {
	  if (*(int*)a < *(int*)b)
			return 1;
	  else if (*(int*)a > *(int*)b)
			return -1;
	  else
			return 0;
}
int main()
{
	  int Array[2000] = { 0 };
	  int N, temp;
	  int i, j, k;
	  scanf("%d", &N);
	  for (i = 0; i < N; i++) {
			scanf("%d", &temp);
			Array[i] = temp;
	  }
	  qsort(Array, N, sizeof(int), compare);
	  for (i = 0; i < N - 1; i++) {
			for (j = 0; j < N; j++) {
				  scanf("%d", &temp);
				  if (temp > Array[N-1]) {
						Array[N - 1] = temp;
						for (k = N-2; k >= 0; k--) {
							  if (temp < Array[k])
									break;
							  else
									SWAP(Array[k + 1], Array[k]);
						}
				  }
			}
	  }
	  printf("%d", Array[N-1]);
}