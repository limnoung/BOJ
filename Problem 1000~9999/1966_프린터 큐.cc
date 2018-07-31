#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int main() {
	  deque <pair<int, int>> A;
	  deque <pair<int, int>>::iterator iter;
	  int T, N, M, prior, count;
	  int i, j;
	  scanf("%d", &T);

	  for (i = 0; i < T; i++) {
			A.clear();
			count = 0;
			scanf("%d %d", &N, &M);
			for (j = 0; j < N; j++) {
				  scanf("%d", &prior);
				  A.push_back(make_pair(j, prior));
			}
			while (1) {
				  for (j = 0; j < A.size(); j++) {
						if (A.begin()->second < (A.begin()+j)->second) {
							  A.push_back(make_pair(A.begin()->first, A.begin()->second));
							  A.pop_front();
							  break;
						}
				  }
				  if (j==A.size()) {
						count++;
							  if (A.begin()->first == M) {
									printf("%d\n", count);
									break;
							  }
						 A.pop_front();
				  }
			}
	  }
}