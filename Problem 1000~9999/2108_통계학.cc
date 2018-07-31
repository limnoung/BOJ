#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	  int N, temp, max = 0, count[8000] = { 0 };
	  float sum = 0;
	  vector<int> A, B;
	  scanf("%d", &N);
	  for (int i = 0; i < N; i++) {
			scanf("%d", &temp);
			sum += temp;
			A.push_back(temp);
			if (temp < 0)
				  count[temp*-1 + 4000]++;
			else
				  count[temp]++;
	  }
	  for (int i = 0; i < 8000; i++){
			if (max == count[i]) {
				  if (i > 4000)
						B.push_back((i - 4000)*-1);
				  else
						B.push_back(i);
			}
			else if (max < count[i]) {
				  B.clear();
				  max = count[i];
				  if (i > 4000)
						B.push_back((i - 4000)*-1);
				  else
						B.push_back(i);
			}
	  }
	  sort(A.begin(), A.end());
	  sort(B.begin(), B.end());
	  sum /= N;
	  printf("%d\n", (int)roundf(sum));
	  printf("%d\n", A[N / 2]);
	  printf("%d\n", (B.size()>1)?B[1]:B[0]);
	  printf("%d\n", A[N-1] - A[0]);

}