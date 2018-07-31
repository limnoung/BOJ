#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;
int rope[100000] = { 0 };
int main()
{
	  int N, max = 0, min = 10000;
	  scanf("%d", &N);
	  for (int i = 0; i < N; i++) 
			scanf("%d", &rope[i]);
	  sort(rope, rope+N, greater<int>());
	  for (int i = 0; i < N; i++) {
			if (min > rope[i])
				  min = rope[i];
			if (max < min *(i+1))
				  max = min *(i+1);
	  }
	  printf("%d", max);
}